#include <stdio.h>

int main() {
    // Declare variable
    int year;

    // Input: Prompt user to enter the year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        // Output: Display that it's a leap year
        printf("%d is a leap year.\n", year);
    } else {
        // Output: Display that it's not a leap year
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
