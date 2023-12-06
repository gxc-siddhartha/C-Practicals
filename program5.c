#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    float radius, area;

    // Input: Prompt user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area of the circle
    area = M_PI * pow(radius, 2);

    // Output: Display area in floating-point notation
    printf("Area of the circle (Floating-point): %.2f\n", area);

    // Output: Display area in exponential notation
    printf("Area of the circle (Exponential): %e\n", area);

    return 0;
}
