#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("sample.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter data to write to the file: ");
    gets(data);

    fprintf(file, "%s", data);

    fclose(file);

    printf("Data written to the file successfully.\n");

    return 0;
}
