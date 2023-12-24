#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // Number of elements in the array
    int *arr; // Pointer to the dynamically allocated array

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1; // Exit with an error code
    }

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the elements of the array
    printf("\nElements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
