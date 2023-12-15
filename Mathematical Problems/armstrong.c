#include<stdio.h>
#include<limits.h>
#include<math.h>
int dCounter(int z);
int main(){
    int a;

    printf("Enter a positive number: \n=>");
    scanf("%d", &a);

    int o = a;
    int nOD = dCounter(a);
    int res = 0 ;
    int rem = 0;
    for(int i = 0; i < nOD; i++){
        rem = a % 10;
        res += pow(rem, nOD);
        rem = 0;
        a = a / 10;
    }

    // printf("=>%d \n", res);

    if(res == o){
        printf("%d is an Armstrong Number.", o);
    }else if (res != o){
        printf("%d is not an Armstrong Number", o);
    }

    return 0;
}

int dCounter(int z){
    int rem = 0;
    int count = 0;
    while (z > 0)
    {
        rem = z % 10;
        // printf("D = %d", rem);
        count++;
        z  = z / 10;
        rem = 0;
    }
    return count;
}