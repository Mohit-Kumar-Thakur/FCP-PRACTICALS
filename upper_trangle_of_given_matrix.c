#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int rows, cols;

    // Input the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Check if the matrix is square (rows must be equal to columns)
    if (rows != cols) {
        printf("Error: The matrix must be square (rows must be equal to columns).\n");
        return 1; // Exit with an error code
    }

    // Declare a 2-D matrix
    int matrix[MAX_SIZE][MAX_SIZE];

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the upper triangle of the matrix
    printf("\nUpper Triangle of the Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Print only the elements above the diagonal
            if (j >= i) {
                printf("%d\t", matrix[i][j]);
            } else {
                printf("\t"); // Print a tab for elements below the diagonal
            }
        }
        printf("\n");
    }

    return 0;
}

