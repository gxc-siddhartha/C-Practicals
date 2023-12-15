// without a third variable
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Swapped values (without third variable):\n");
    printf("num1: %d\nnum2: %d\n", num1, num2);

    return 0;
}
