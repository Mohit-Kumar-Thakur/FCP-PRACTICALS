#include <stdio.h>

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check if the size is non-negative
    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1; // Exit with an error code
    }

    int arr[size];

    // Input array elements
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Print odd-indexed elements
    printf("\nOdd-indexed elements:\n");
    for (int i = 1; i < size; i += 2) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
