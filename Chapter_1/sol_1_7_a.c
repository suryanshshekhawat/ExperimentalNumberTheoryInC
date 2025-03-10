#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    for (int i = 2 ; i <= sqrt(n) ; i++ ) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int SieveOfEratosthenes(int n) {
    int countOfPrimes = 0;
    for (int i = 2 ; i <= n ; i ++ ) {
        if (isPrime(i) == 1) {
            printf("%d ", i);
            countOfPrimes++;
        }
    }
    return countOfPrimes;
}

int main() {
    int numOfPrimes = SieveOfEratosthenes(1000000);
    printf("\nNumber of primes: %d", numOfPrimes);
    return 0;
}