#include <stdio.h>

// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        // Last i elements are already in place, so no need to check them
        for (j = 0; j < n-i-1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                // Swapping using a temporary variable
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Example usage
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
    
    // Call the bubbleSort function
    bubbleSort(array, size_of_array);

    // Output the sorted array
    printf("Sorted array: \n");
    printArray(array, size_of_array);

    return 0;
}
