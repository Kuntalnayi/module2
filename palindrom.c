#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if number is a palindrome
int isNumberPalindrome(int num) {
    int original = num, reverse = 0, digit;

    while(num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return original == reverse;
}

// Function to check if string is a palindrome
int isStringPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while(start < end) {
        if (tolower(str[start]) != tolower(str[end]))  // case insensitive
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    int num;
    char str[100];

    // Number palindrome check
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isNumberPalindrome(num))
        printf("The number %d is a palindrome.\n", num);
    else
        printf("The number %d is not a palindrome.\n", num);

    // String palindrome check
    printf("\nEnter a string: ");
    scanf(" %[^\n]", str);  

    if (isStringPalindrome(str))
        printf("The string \"%s\" is a palindrome.\n", str);
    else
        printf("The string \"%s\" is not a palindrome.\n", str);

    return 0;
}
