#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Display the original numbers
    printf("Original numbers: %d, %d\n", num1, num2);

    // Swap using a third variable
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping with a third variable: %d, %d\n", num1, num2);

    // Swap without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping without a third variable: %d, %d\n", num1, num2);

    return 0;
}
