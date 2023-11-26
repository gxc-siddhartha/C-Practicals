#include <stdio.h>

int main() {
    // Declare variables
    int number;
    long long factorial = 1;

    // Input: Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for non-negative number
    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }

        // Output: Display the calculated factorial
        printf("Factorial of %d is %llu.\n", number, factorial);
    }

    return 0;
}
