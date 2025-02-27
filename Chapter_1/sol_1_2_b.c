// Write a program to perform the Euclidean algorithm. 
// Compute gcd(891555, 191415).

#include <stdio.h>

void euclideanAlgorithm(int n, int d) {
    int q, r;
    
    while (d != 0) {  // Continue until remainder is 0
        q = n / d;    // Compute quotient
        r = n % d;    // Compute remainder
        printf("%d = %d * %d + %d\n", n, d, q, r);
        n = d;  // Update n to previous divisor
        d = r;  // Update d to remainder
    }

    printf("GCD = %d\n", n); // The last nonzero remainder is the GCD
}

int main() {
    int n = 103, d = 11;  // Change to required values
    euclideanAlgorithm(n, d);
    return 0;
}
