#include <stdio.h>

int main() {
    char creditCardNumber[17];
    int sum = 0;
    int digit;

    // Input the credit card number
    printf("Enter the 16-digit Credit Card number: ");
    scanf("%s", creditCardNumber);

    // Iterate through each digit from right to left
    for (int i = 15; i >= 0; i--) {
        digit = creditCardNumber[i] - '0';

        // Double every other digit starting from the rightmost - 1 digit
        if ((15 - i) % 2 == 1) {
            digit *= 2;

            // If the result is greater than 9, subtract 9
            if (digit > 9) {
                digit -= 9;
            }
        }

        // Add the digit to the sum
        sum += digit;
    }

    // The credit card number is valid if the sum is divisible by 10
    if (sum % 10 == 0) {
        printf("Valid Credit Card number.\n");
    } else {
        printf("Invalid Credit Card number.\n");
    }

    return 0;
}
