#include <stdio.h>

int main() {
    // Declare variables
    int number, originalNumber, remainder, sum = 0;

    // Input: Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Save the original number for later comparison
    originalNumber = number;

    // Calculate the sum of individual digits
    while (number > 0) {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    // Output: Display the sum of individual digits
    printf("Sum of individual digits of %d is: %d\n", originalNumber, sum);

    return 0;
}
