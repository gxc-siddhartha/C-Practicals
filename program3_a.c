// With a third variable
#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, temp;

    // Input: Prompt user for two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap values using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Output: Display swapped values
    printf("Swapped values (with third variable):\n");
    printf("num1: %d\nnum2: %d\n", num1, num2);

    return 0;
}
