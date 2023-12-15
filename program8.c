#include <stdio.h>

int main() {
    
    int startReading, endReading, uConsumed;
    float totalBill = 0.0;
    
    printf("Enter the starting meter reading: ");
    scanf("%d", &startReading);

    printf("Enter the ending meter reading: ");
    scanf("%d", &endReading);

    uConsumed = endReading - startReading;
    
    if (uConsumed <= 100) {
        totalBill = uConsumed * 1.50;
    } else if (uConsumed <= 300) {
        totalBill = 100 * 1.50 + (uConsumed - 100) * 2.00;
    } else if (uConsumed <= 500) {
        totalBill = 100 * 1.50 + 200 * 2.00 + (uConsumed - 300) * 2.50;
    } else {
        totalBill = 100 * 1.50 + 200 * 2.00 + 200 * 2.50 + (uConsumed - 500) * 3.25;
    }

    printf("Units Consumed: %d\n", uConsumed);
    printf("Total Electricity Bill: Rs. %.2f\n", totalBill);

    return 0;
}
