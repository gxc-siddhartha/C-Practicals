#include <stdio.h>

int main() {
    int array[5];
    
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    int min = array[0];
    int max = array[0];

    for (int i = 1; i < 5; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("Minimum Element: %d\n", min);
    printf("Maximum Element: %d\n", max);

    return 0;
}
