#include <stdio.h>

int main() {
    int marks;

    // Input
    printf("Enter student marks (0 to 100): ");
    scanf("%d", &marks);

    // Grade decision using if-else
    if (marks > 90) {
        printf("Grade: A\n");
    } else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    } else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}
