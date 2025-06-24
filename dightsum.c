#include <stdio.h>

int main() {
    int num, digit, sum = 0, reverse = 0;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num;

    
    while (num != 0) {
        digit = num % 10;       
        sum += digit;          
        reverse = reverse * 10 + digit; 
        num /= 10;               
    }

    // Output
    printf("Sum of digits of %d = %d\n", original, sum);
    printf("Reversed number = %d\n", reverse);

    return 0;
}
