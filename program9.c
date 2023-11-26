#include <stdio.h>

int main() {
    // Declare variables
    float num1, num2, result;
    char operator;

    // Input: Prompt user for operator and two numbers
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform arithmetic operation based on operators
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Sum: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Difference: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Product: %.2f\n", result);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %.2f\n", result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}