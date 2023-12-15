#include <stdio.h>

int main() {
    
    int n, firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Enter the value of N: ");
    scanf("%d", &n);

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
