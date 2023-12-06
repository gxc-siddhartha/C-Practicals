#include <stdio.h>

int main() {
    // Declare an array to store elements
    int array[5];

    // Input: Prompt the user to enter 5 elements
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Initialize variables to store minimum and maximum
    int min = array[0];
    int max = array[0];

    // Find minimum and maximum elements
    for (int i = 1; i < 5; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Output: Display the minimum and maximum elements
    printf("Minimum Element: %d\n", min);
    printf("Maximum Element: %d\n", max);

    return 0;
}
