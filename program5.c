#include <stdio.h>
#include <math.h>

int main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = M_PI * pow(radius, 2);

    printf("Area of the circle (Floating-point): %.2f\n", area);

    printf("Area of the circle (Exponential): %e\n", area);

    return 0;
}
