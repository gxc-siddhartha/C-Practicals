// #include<stdint.h>
// #include<math.h>
// #include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
// #include<string.h>

int main(){
    int size_of_array;

    printf("Enter the size of array: ");
    scanf("%d", &size_of_array);

    char DOD[size_of_array];

    for(int i = 0; i < size_of_array; i++){
        DOD[i] = 'X';
    }

    printf("\nArray formatted as: {");
    for(int i = 0; i < size_of_array; i++){
        if(i < size_of_array-1){
            printf("%c, ", DOD[i]);
        }else{
            printf("%c", DOD[i]);
        }
    }
    printf("}\n");

    int array[size_of_array];

    printf("Enter the elements:\n");
    for(int i = 0; i < size_of_array; i++){
        scanf("%d", &array[i]);
    }
    
    int elem_t_searched;
    printf("Enter the element you want to find in {");
    for(int i = 0; i < size_of_array; i++){
        if(i < size_of_array-1){
            printf("%d, ", array[i]);
        }else{
            printf("%d", array[i]);

        }
    }
    printf("}: ");
    scanf("%d", &elem_t_searched);

    for(int i = 0; i < size_of_array; i++){
        if(array[i] == elem_t_searched){
            printf("Element [%d] found at index: %d\n", elem_t_searched, i+1);
        }else{

        }

    }


    return 0;
}