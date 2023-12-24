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

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Display the result
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
