#include <stdio.h>

int main() {
    int array[5];

    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += array[i];
    }

    printf("Sum of the array: %d\n", sum);

    return 0;
}
