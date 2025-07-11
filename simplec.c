#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Take input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // Note the space before %c to catch newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operation
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if(num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;
        case '%':
            // Modulus works only with integers
            if((int)num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Result = %d\n", (int)num1 % (int)num2);
            break;
        default:
            printf("Invalid operator! Please use +, -, *, /, or %% only.\n");
    }

    return 0;
}
