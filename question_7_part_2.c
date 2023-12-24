#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if n is within a valid range
    if (n < 1 || n > 10000) {
        printf("Invalid input for the number of elements.\n");
        return 1; // Exit with an error code
    }

    // Declare an array of n integers
    int A[10000];

    // Input elements of the array
    printf("Enter %d distinct integers in the range [0, 10000]:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);

        // Check if the integer is in the valid range
        if (A[i] < 0 || A[i] > 10000) {
            printf("Invalid input for the element.\n");
            return 1; // Exit with an error code
        }
    }

    // Sort the array in a way that maximizes the concatenation of numbers
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            char str1[20], str2[20];

            // Convert integers to strings and concatenate for comparison
            sprintf(str1, "%d%d", A[i], A[j]);
            sprintf(str2, "%d%d", A[j], A[i]);

            // Compare the concatenated strings
            if (strcmp(str2, str1) > 0) {
                // Swap the elements if needed
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Print the largest integer that can be made
    printf("The largest integer that can be made is: ");
    for (int i = 0; i < n; i++) {
        printf("%d", A[i]);
    }
    printf("\n");

    return 0;
}
