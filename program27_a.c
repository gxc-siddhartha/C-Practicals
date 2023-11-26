#include <stdio.h>

// Function to swap two numbers using Call By Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

int main() {
    int num1, num2;

    // Input: Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Output: Display the original numbers
    printf("Before swap (Main function): num1 = %d, num2 = %d\n", num1, num2);

    // Call the function to swap numbers by value
    swapByValue(num1, num2);

    // Output: Display the numbers after calling the function (no change)
    printf("After swap (Main function): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
