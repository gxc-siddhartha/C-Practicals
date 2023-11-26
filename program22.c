#include <stdio.h>

void transposeMatrix(int rows, int columns, int matrix[10][10], int result[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result[j][i] = matrix[i][j];
        }
    }
}

void displayMatrix(int rows, int columns, int matrix[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;

    // Input: Prompt the user to enter the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Input: Prompt the user to enter elements for the matrix
    printf("Enter elements for the matrix:\n");
    int matrix[10][10];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate Transpose
    int transposeResult[10][10];
    transposeMatrix(rows, columns, matrix, transposeResult);

    // Output: Display the original matrix and its transpose
    printf("\nOriginal Matrix:\n");
    displayMatrix(rows, columns, matrix);

    printf("\nTranspose Matrix:\n");
    displayMatrix(columns, rows, transposeResult);

    return 0;
}
