#include <stdio.h>

int main() {
    // Output: Display the desired pattern
    for (int i = 1; i <= 4; ++i) {
        // Print spaces for alignment
        for (int space = 1; space <= 4 - i; ++space) {
            printf("  ");
        }

        // Print asterisks for the pattern
        for (int j = 1; j <= 2 * i - 1; ++j) {
            printf("* ");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
