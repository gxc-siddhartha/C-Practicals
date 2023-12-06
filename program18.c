#include <stdio.h>

int main() {
    // Declare an array to store 5 elements
    int array[5];

    // Input: Prompt the user to enter 5 elements
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Calculate the sum of the array
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += array[i];
    }

    // Output: Display the sum of the array
    printf("Sum of the array: %d\n", sum);

    return 0;
}
