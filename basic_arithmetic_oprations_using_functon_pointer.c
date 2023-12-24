#include <stdio.h>

// Function prototypes for arithmetic operations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

// Function pointer type for arithmetic operations
typedef int (*ArithmeticOperation)(int, int);

int main() {
    int num1, num2;
    char operator;

    // Input two numbers and the operator
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Define a function pointer based on the selected operator
    ArithmeticOperation operation;
    switch (operator) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
        default:
            printf("Invalid operator\n");
            return 1; // Exit with an error code
    }

    // Perform the selected arithmetic operation using the function pointer
    int result = operation(num1, num2);

    // Display the result
    printf("Result: %d %c %d = %d\n", num1, operator, num2, result);

    return 0;
}

// Function definitions for arithmetic operations
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0; // Return 0 in case of division by zero
    }
}
