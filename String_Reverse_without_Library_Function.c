#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
