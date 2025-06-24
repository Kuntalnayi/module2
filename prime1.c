#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // Input
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop from 2 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}
