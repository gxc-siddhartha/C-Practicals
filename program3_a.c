// With a third variable
#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Swapped values (with third variable):\n");
    printf("num1: %d\nnum2: %d\n", num1, num2);

    return 0;
}
