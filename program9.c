#include <stdio.h>

int main() {
    
    float num1, num2, result;
    char operator;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    
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