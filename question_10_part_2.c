#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[1000];

    // Input the line of text
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    int count = 0;
    int length = strlen(text);

    // Iterate through each character in the text
    for (int i = 0; i < length - 1; i++) {
        // Check if the current and next characters are vowels
        if (isalpha(text[i]) && isalpha(text[i + 1]) &&
            strchr("aeiouAEIOU", text[i]) && strchr("aeiouAEIOU", text[i + 1])) {
            count++;
            printf("Found: %c%c\n", text[i], text[i + 1]);
        }
    }

    // Print the total count of occurrences
    printf("Total occurrences of two vowels in succession: %d\n", count);

    return 0;
}
