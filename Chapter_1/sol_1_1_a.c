// Write a program to perform trial division on a given number n

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    for (int i = 2 ; i <= sqrt(n) ; i ++ ) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime Divisors of %d are: ", n);
    for (int i = 2 ; i <= sqrt(n) ; i ++) {
        if (n % i == 0 && isPrime(i) == 1) {
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}