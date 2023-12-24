#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input a positive integer n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of natural numbers up to n using a loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
