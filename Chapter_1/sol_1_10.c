#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int pow_2(int n) {
    if (n == 0) {
        return 1;
    }
    int power = 2;
    for (int i = 1; i < n; i++) {
        power *= 2;
    }
    return power;
}

int pow_n(int base, int n) {
    if (n == 0) {
        return 1;
    }
    int power = base;
    for (int i = 1; i < n; i++) {
        power *= base;
    }
    return power;
}

int main() {
    int a = 1;
    int b = 1;
    for (int i = 1; i < 20; i++) {  // Starting from i=1 to avoid the n=0 case
        // Be careful with overflow; these expressions grow very quickly
        int val1 = pow_n(pow_2(a), i) - 1;
        int val2 = pow_n(pow_2(b), i) - 1;
        printf("%d\t", gcd(val1, val2));
    }
    return 0;
}