#include <stdio.h>

// Function prototype
void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]);

int main() {
    int rows, cols;

    // Input the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2-D matrix
    int matrix[10][10];

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Declare a 2-D array to store the transposed matrix
    int result[10][10];

    // Call the function to transpose the matrix
    transposeMatrix(rows, cols, matrix, result);

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Function to transpose a matrix
void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            result[i][j] = matrix[j][i];
        }
    }
}
