#include <stdio.h>

// Function to calculate factorial using recursion
int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorialRecursive(n - 1);
    }
}

// Function to calculate factorial using non-recursion
int factorialNonRecursive(int n) {
    int result = 1;
    while (n > 1) {
        result *= n;
        n--;
    }
    return result;
}

// Function to calculate GCD using recursion
int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcdRecursive(b, a % b);
    }
}

// Function to calculate GCD using non-recursion (Euclidean Algorithm)
int gcdNonRecursive(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input: Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate and display factorial using recursion
    printf("Factorial of %d (Recursive): %d\n", num1, factorialRecursive(num1));

    // Calculate and display factorial using non-recursion
    printf("Factorial of %d (Non-Recursive): %d\n", num2, factorialNonRecursive(num2));

    // Calculate and display GCD using recursion
    printf("GCD of %d and %d (Recursive): %d\n", num1, num2, gcdRecursive(num1, num2));

    // Calculate and display GCD using non-recursion
    printf("GCD of %d and %d (Non-Recursive): %d\n", num1, num2, gcdNonRecursive(num1, num2));

    return 0;
}
