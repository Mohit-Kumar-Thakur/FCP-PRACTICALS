#include <stdio.h>
#include <string.h>

int calculateStringLength(char str[]) {
    return strlen(str);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int length = calculateStringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
