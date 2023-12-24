#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fgets(data, sizeof(data), file);

    printf("Data read from the file: %s\n", data);

    fclose(file);

    return 0;
}
