// without a third variable
#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;

    // Input: Prompt user for two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap values without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    // Output: Display swapped values
    printf("Swapped values (without third variable):\n");
    printf("num1: %d\nnum2: %d\n", num1, num2);

    return 0;
}
