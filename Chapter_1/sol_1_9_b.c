#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    } 
    return 1;
}

// Efficient modular exponentiation
long long modPower(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

int Bang_Zsigmondy_function(int n) {
    if (n < 2 || n == 6) {
        printf("Invalid input: n must be ≥ 2 and n ≠ 6\n");
        return -1;
    }
    
    // Start checking from 2
    for (int p = 2; ; p++) {
        if (!isPrime(p)) continue;
        
        // Check if p divides 2^n - 1
        if ((modPower(2, n, p) - 1) % p == 0) {
            // Now check if p is primitive for n
            int isPrimitive = 1;
            
            for (int d = 1; d < n; d++) {
                if (n % d == 0) { // d is a proper divisor of n
                    // Check if p divides 2^d - 1
                    if ((modPower(2, d, p) - 1) % p == 0) {
                        isPrimitive = 0;
                        break;
                    }
                }
            }
            
            if (isPrimitive) {
                return p;  // Return the primitive prime divisor
            }
        }
    }
    
    // This should not be reached as the theorem guarantees a primitive prime divisor
    // except for the special cases already handled
    return -1;
}

int main() {
    int n = 100;  // Example value
    int result = Bang_Zsigmondy_function(n);
    if (result != -1) {
        printf("For n = %d, the primitive prime divisor is %d\n", n, result);
    }
    return 0;
}