#include <stdio.h>

int main() {
    // Declare variables
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    // Input: Prompt user to enter the value of 'N'
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Output: Display the Fibonacci series
    printf("Fibonacci Series for N = %d:\n", n);

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            nextTerm = i;
        } else {
            nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
        printf("%d ", nextTerm);
    }

    return 0;
}
