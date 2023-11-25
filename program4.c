#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    float num1, num2, result;
    char operator;

    // Input: Prompt user for operator and two numbers
    printf("Enter an operator (+, -, *, /, s for square): ");
    scanf(" %c", &operator);

    // Check if the operator is for square (s)
    if (operator == 's' || operator == 'S') {
        printf("Enter a number for squaring: ");
        scanf("%f", &num1);

        // Calculate square
        result = num1 * num1;

        // Output: Display square result
        printf("Square: %.2f\n", result);
    } else {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Perform calculation based on the operator
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
    }

    return 0;
}
