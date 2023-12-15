#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 10; ++i) {
        if (i == 3 || i == 5) {
            continue;
        }
        
        printf("\nMultiplication Table for %d:\n", i);
        
        for (int j = 1; j <= 10; ++j) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}
