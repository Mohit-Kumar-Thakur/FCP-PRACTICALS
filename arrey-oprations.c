#include <stdio.h>
#include <limits.h> // Include limits.h for INT_MAX and INT_MIN

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if the size is non-negative
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1; // Exit with an error code
    }

    long arr[n];

    // Input array elements
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%ld", &arr[i]);
    }

    // Initialize variables for average, maximum, and minimum
    long sum = 0;
    long max = LONG_MIN;
    long min = LONG_MAX;

    // Calculate sum, find maximum and minimum using a for loop
    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Calculate the average
    double average = (double)sum / n;

    // Display the results
    printf("Average of array elements: %.2f\n", average);
    printf("Maximum element: %ld\n", max);
    printf("Minimum element: %ld\n", min);

    return 0;
}
