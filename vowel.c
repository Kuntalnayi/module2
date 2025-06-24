#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, specials = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    while (str[i] != '\0') {
        char ch = str[i];

    
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch >= 'a' && ch <= 'z') {
        
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch != ' ' && ch != '\n') {
            specials++;
        }

        i++;
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial characters: %d\n", specials);

    return 0;
}
