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
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter elements for the matrix:\n");
    int matrix[10][10];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int transposeResult[10][10];
    transposeMatrix(rows, columns, matrix, transposeResult);
    
    printf("\nOriginal Matrix:\n");
    displayMatrix(rows, columns, matrix);

    printf("\nTranspose Matrix:\n");
    displayMatrix(columns, rows, transposeResult);

    return 0;
}
