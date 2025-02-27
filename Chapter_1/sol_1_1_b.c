// find the smallest prime number larger than 10010

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
    int n = 10010;
    while (1) {
        if (isPrime(n) == 1) {
            printf("The smallest prime number larger than 10010 is: %d\n", n);
            break;
        }
        n++;
    }
    return 0;
}