#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50] = "";
    int i = 0, j = 0, maxLen = 0, wordCount = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  

    while (str[i] != '\0') {
        
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0'; 
                wordCount++;
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longest, word);
                }
                j = 0; 
            }
        }
        i++;
    }

    printf("\nTotal Words: %d\n", wordCount);
    printf("Longest Word: %s\n", longest);

    return 0;
}
