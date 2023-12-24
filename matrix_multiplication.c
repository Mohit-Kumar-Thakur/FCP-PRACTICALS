#include <stdio.h>

int main() {
    int m, n, p;
    printf("Enter the dimensions of matrices A (m x n) and B (n x p): ");
    scanf("%d %d %d", &m, &n, &p);

    int a[m][n], b[n][p], result[m][p];

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) 
            scanf("%d", &a[i][j]);

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &b[i][j]);

    printf("Product of matrices A and B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
