#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int originalNumber, remainder, n = 0, result = 0;

    // Save the original number
    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    // Reset original number
    originalNumber = number;

    // Calculate the sum of nth power of individual digits
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    // Check if the result is equal to the original number
    return (result == number);
}

int main() {
    // Declare variable
    int number;

    // Input: Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number and display the result
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
