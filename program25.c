#include <stdio.h>

// Define an enumerated data type for days of the week
enum Days {
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    // Declare a variable of the enumerated data type
    enum Days selectedDay;

    // Input: Prompt the user to select a day
    printf("Select a day (1-7):\n");
    int dayNumber;
    scanf("%d", &dayNumber);

    // Validate the input
    if (dayNumber < 1 || dayNumber > 7) {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
        return 1; // Exit the program with an error code
    }

    // Set the selected day based on the input
    selectedDay = (enum Days)dayNumber;

    // Output: Display the number assigned to the selected day
    printf("The number assigned to the selected day is: %u\n", selectedDay);

    return 0;
}
