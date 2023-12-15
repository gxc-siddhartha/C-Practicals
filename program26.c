#include <stdio.h>


void findSum(int num1, int num2) {
    int sum = num1 + num2;
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    findSum(num1, num2);

    return 0;
}
