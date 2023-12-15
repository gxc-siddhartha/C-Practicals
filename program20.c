#include <stdio.h>

int main() {
    
    int array[5];
    
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < 5; ++i) {
        if (array[i] > 0) {
            positiveCount++;
        } else if (array[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Number of Positive Numbers: %d\n", positiveCount);
    printf("Number of Negative Numbers: %d\n", negativeCount);
    printf("Number of Zeros: %d\n", zeroCount);

    return 0;
}
