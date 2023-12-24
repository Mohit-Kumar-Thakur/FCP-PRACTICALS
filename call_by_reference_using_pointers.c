#include <stdio.h>

// Function prototype
void swap(int *a, int *b);

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display numbers before swapping
    printf("\nBefore swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Call the function to swap numbers using pointers
    swap(&num1, &num2);

    // Display numbers after swapping
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
