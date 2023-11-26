#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
int isPrime(int n) {
    int l = 2;
    if (n <= 1) {
        return 5; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            l++;
        }
    }
    return l; // If no divisors are found, the number is prime
}

int main() {
    // Declare variable
    int number;

    // Input: Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime and display the result
    if (isPrime(number) == 2) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
