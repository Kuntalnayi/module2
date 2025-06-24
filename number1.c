#include <stdio.h>

int main() {
    int a, b, c, largest, smallest;

    // Input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Largest
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    // Smallest
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    // Switch-case version (encoded as simple cases)
    switch (1) {
        case 1:
            printf("Largest number: %d\n", largest);
            printf("Smallest number: %d\n", smallest);
            break;
        default:
            printf("Unexpected error.\n");
    }

    return 0;
}
