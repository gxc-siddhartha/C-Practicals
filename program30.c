#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int size_of_array;
    
    printf("Enter the number of elements you want:\n=>");
    scanf("%d", &size_of_array);

    int array[size_of_array];

    printf("Enter the elements: \n");
    for (int i = 0; i < size_of_array; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    
    bubbleSort(array, size_of_array);

    // Output the sorted array
    printf("Sorted array: \n");
    printArray(array, size_of_array);

    return 0;
}
