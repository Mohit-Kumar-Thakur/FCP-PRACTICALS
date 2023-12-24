#include <stdio.h>

void findDuplicates(int arr[], int size);

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of given size
    int array[size];

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element at position %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Find and display duplicate elements and their indices
    findDuplicates(array, size);

    return 0;
}

void findDuplicates(int arr[], int size) {
    int duplicateCount = 0;

    printf("\nDuplicate elements and their indices:\n");

    // Iterate through each element in the array
    for (int i = 0; i < size; i++) {
        // Check if the current element is a duplicate
        if (arr[i] != -1) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    // Display the duplicate element and its indices
                    printf("Element %d is a duplicate at indices %d and %d\n", arr[i], i, j);
                    duplicateCount++;

                    // Mark the duplicate elements to avoid counting them again
                    arr[j] = -1;
                }
            }
        }
    }

    if (duplicateCount == 0) {
        printf("No duplicate elements found.\n");
    } else {
        printf("Total number of duplicate elements: %d\n", duplicateCount);
    }
}
