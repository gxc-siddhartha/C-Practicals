#include <stdio.h>

int main()
{
    int decimalNumber, remainder, binaryNumber = 0, base = 1;

    printf("Enter a positive number: ");
    scanf("%u", &decimalNumber);

    if (decimalNumber < 0)
    {
        printf("Error: Please enter a positive number.\n");
        return 1;
    }

    while (decimalNumber > 0)
    {
        remainder = decimalNumber % 2;
        binaryNumber = binaryNumber + remainder * base;
        decimalNumber = decimalNumber / 2;
        base = base * 10;
    }

    printf("Binary equivalent: %u\n", binaryNumber);
    return 0;
}
