#include <stdio.h>


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
    enum Days selectedDay;

    printf("Select a day (1-7):\n");
    int dayNumber;
    scanf("%d", &dayNumber);
    
    if (dayNumber < 1 || dayNumber > 7) {
        printf("Invalid input! Please enter a number between 1 and 7.\n");
        return 1; 
    }

    selectedDay = (enum Days)dayNumber;

    printf("The number assigned to the selected day is: %u\n", selectedDay);

    return 0;
}
