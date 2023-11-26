#include <stdio.h>

int main() {
    // Iterate through tables from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        // Skip tables for 3 and 5
        if (i == 3 || i == 5) {
            continue;
        }

        // Display the header for the current table
        printf("\nMultiplication Table for %d:\n", i);
        
        // Display the multiplication table for the current number
        for (int j = 1; j <= 10; ++j) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
