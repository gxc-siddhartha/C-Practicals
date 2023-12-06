#include<stdio.h>

int main(){
    int a;

    printf("Enter a number: \n=>");
    scanf("%d", &a);

    int o = a;

    int rem = 0;
    int sum = 0;

    while (a != 0)
    {
        rem = a % 10;
        sum += rem;
        a /= 10;
    }
    
    printf("The sum of %d is = %d", o, sum);

    return 0;
}