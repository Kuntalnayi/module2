#include <stdio.h>

int main() {
    int a, b, c;

    // Input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find largest
    if (a >= b && a >= c)
        printf("Largest number: %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest number: %d\n", b);
    else
        printf("Largest number: %d\n", c);

    // Find smallest
    if (a <= b && a <= c)
        printf("Smallest number: %d\n", a);
    else if (b <= a && b <= c)
        printf("Smallest number: %d\n", b);
    else
        printf("Smallest number: %d\n", c);

    return 0;
}
