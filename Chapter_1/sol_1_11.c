#include <stdio.h>
#include <math.h>

int main() {
    for (int i = 1; i <= 1000000000; i++) {
        int sum_of_3_squares = i * i + (i + 1) * (i + 1) + (i + 2) * (i + 2);
        int root = sqrt(sum_of_3_squares);
        
        if (root * root == sum_of_3_squares) { // Check perfect square correctly
            printf("%d, %d, %d\n", i, i + 1, i + 2);
            break;  // Remove if you want all solutions within range
        }
    }
    return 0;
}
