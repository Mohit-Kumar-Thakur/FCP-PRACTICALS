#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], result[m][n];

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    printf("Sum of matrices A and B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = a[i][j] + b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
