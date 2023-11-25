#include <stdio.h>

int main() {
    // Declare variables
    unsigned int decimalNumber, remainder, binaryNumber = 0, base = 1;

    // Input: Prompt user for a positive number
    printf("Enter a positive number: ");
    scanf("%u", &decimalNumber);

    // Check if the input is a positive number
    if (decimalNumber < 0) {
        printf("Error: Please enter a positive number.\n");
        return 1; // Exit program with an error code
    }

    // Convert decimal to binary
    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;
        binaryNumber = binaryNumber + remainder * base;
        decimalNumber = decimalNumber / 2;
        base = base * 10;
    }

    // Output: Display binary equivalent
    printf("Binary equivalent: %u\n", binaryNumber);
    return 0;
}
