#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // Using unsigned long long to handle large factorials

    // Input a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check if the input is non-negative
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1; // Exit with an error code
    }

    // Calculate factorial using a for loop
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display the result
    printf("Factorial of %d is: %llu\n", n, factorial);

    return 0;
}
