#include<stdio.h>
int main(){
    int a;

    printf("Enter the value of n: \n=>");
    scanf("%d", &a);


    if(a < 50){
        int fo[50];
        for(int i = 0; i < a; i++){
            if(i == 0 || i < 2){
                fo[i] = i;
            }else if(i > 1){
                fo[i] = fo[i-1] + fo[i-2];
            }
        }

        for (int i = 0; i < a; i++)
        {
            printf("%d ", fo[i]);

        }
        

    }else{
        printf("This program only supports upto 50 elements.");
    }


    return 0;
}