#include <stdio.h>


int getLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// reverse the string
void reverseString(char str[]) {
    int start = 0;
    int end = getLength(str) - 1;
    char temp;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); 

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
