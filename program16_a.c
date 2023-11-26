#include <stdio.h>

int main() {
    // Output: Display the desired format
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
