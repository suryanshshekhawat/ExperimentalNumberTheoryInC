#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

void extended_euclidean_algorithm(int n, int d, int *gcd, int *a, int *b) {
    if (d <= 0 || n <= 0) {
        printf("Invalid input\n");
        return;
    }
    
    int r0 = max(n, d);
    int r1 = min(n, d);
    int a0 = 1, b0 = 0;
    int a1 = 0, b1 = 1;

    while (r1 != 0) {
        int q = r0 / r1;
        int r = r0 - q * r1;
        int a2 = a0 - q * a1;
        int b2 = b0 - q * b1;

        r0 = r1;
        r1 = r;
        a0 = a1;
        a1 = a2;
        b0 = b1;
        b1 = b2;
    }

    *gcd = r0;
    *a = a0;
    *b = b0;
}

int main() {
    int n = 4095, d = 32767;
    int gcd, a, b;
    
    extended_euclidean_algorithm(n, d, &gcd, &a, &b);
    printf("gcd(%d, %d) = %d\n", n, d, gcd);
    printf("Coefficients: a = %d, b = %d\n", a, b);
    
    return 0;
}
