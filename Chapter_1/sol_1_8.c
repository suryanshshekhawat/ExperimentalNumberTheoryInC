#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int isPrime(int n) {
    for (int i = 2 ; i <= sqrt(n) ; i++ ) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isPalindrome(int n) {
    char strNum[10];
    itoa(n, strNum, 10);
    int len = strlen(strNum);
    for (int i = 0 ; i <= len /2 ; i ++ ) {
        if (strNum[i] != strNum[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num = 1001;
    int palindromicPrimes = 0;
    while(1) {
        if (isPrime(num) == 1 && isPalindrome(num) == 1) {
            printf("%d\n", num);
            palindromicPrimes++;
            if (palindromicPrimes == 5) {
                break;
            }
        }
        num += 2;
    }
    return 0;
}