#include <stdio.h>

int main() {
    int size;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Declare a 2-D matrix of size 'size' x 'size'
    int matrix[10][10];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and display the sum of diagonal elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i]; // Add the diagonal element at position (i, i)
    }

    // Display the sum of diagonal elements
    printf("\nSum of diagonal elements: %d\n", sum);

    return 0;
}
