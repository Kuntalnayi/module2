#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime check
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output
    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    return 0;
}
