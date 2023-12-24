#include <stdio.h>

int main() {
    float principal, rate, time;

    // Input principal, rate, and time from the user
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    float interest = (principal * rate * time) / 100.0;

    // Display the result
    printf("Simple Interest: %.2f\n", interest);

    return 0;
}
