#include<stdio.h> 

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

int main(){
    int a;

    printf("Enter a number: \n=>");
    scanf("%d", &a);

    int size = dCounter(a);
    
    printf("There are %d number of digits", size);

    int o = a;

    int onum[size];

    int ronum[size];

    int rem = 0;

    for(int i = 0; i < size; i++){
        rem = a % 10;
        onum[i] = rem;
        rem = 0;
        a = a / 10;
    }
    for(int i = size; i >= 0; i--){
        ronum[i] = onum[(size-1)-i];
    }

    printf("\n\nReversed Number: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", onum[i]);
    }

    printf("\n\nronum Number: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", ronum[i]);
    }

    int count = 0;
    for (int i = 0; i < size; i++)
    {   
        if(onum[i] == ronum[i]){
            count++;
        }
        
    }

    if(count == size){
        printf("\nThe number is a palindrome");
    }else{
        printf("\nThe number is not a palindrome");

    }
    
    

    return 0;
}