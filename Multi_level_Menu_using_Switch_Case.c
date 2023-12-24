#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exponent\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Sum: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Difference: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Product: %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %.2lf\n", result);
            } else {
                printf("Cannot divide by zero.\n");
            }
            break;
        case 5:
            result = 1;
            for (int i = 0; i < num2; i++) {
                result *= num1;
            }
            printf("Exponent: %.2lf\n", result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
