#include <stdio.h>
#include <stdbool.h>

int isPrime(int n) {
    int l = 2;
    if (n <= 1) {
        return 5; 
    }
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            l++;
        }
    }
    return l; 
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPrime(number) == 2) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
