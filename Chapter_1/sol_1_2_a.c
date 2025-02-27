// Write a program to perform the division algorithm. 
// Compute q, r for (n, d) = (103, 11).

#include <stdio.h>
#include <math.h>

int main() {
    int n = 103; int d = 11;
    printf("%d = %d * %d + %d ", n, d, n / d, n % d);
    return 0;
}