#include <stdio.h>

int main() {
    // Declare variables
    float num1, num2, num3, sum, average;

    // Input: Prompt user for three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate sum and average
    sum = num1 + num2 + num3;
    average = sum / 3;

    // Output: Display sum and average
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
