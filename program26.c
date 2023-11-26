#include <stdio.h>

// Function to calculate the sum of two numbers without returning a value
void findSum(int num1, int num2) {
    int sum = num1 + num2;
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
}

int main() {
    // Input: Prompt the user to enter two numbers
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to find the sum
    findSum(num1, num2);

    return 0;
}
