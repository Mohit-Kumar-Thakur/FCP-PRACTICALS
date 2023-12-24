#include <stdio.h>

int main() {
    float temperatureCelsius, temperatureFahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperatureCelsius);

    // Convert Celsius to Fahrenheit
    temperatureFahrenheit = (temperatureCelsius * 9 / 5) + 32;

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperatureCelsius, temperatureFahrenheit);

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temperatureFahrenheit);

    // Convert Fahrenheit to Celsius
    temperatureCelsius = (temperatureFahrenheit - 32) * 5 / 9;

    // Display the result
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperatureFahrenheit, temperatureCelsius);

    return 0;
}
