#include <stdio.h>

void matrixAddition(int rows, int columns, int mat1[10][10], int mat2[10][10], int result[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void matrixSubtraction(int rows, int columns, int mat1[10][10], int mat2[10][10], int result[10][10]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result[i][j] = mat1[i][j] - mat2[i][j];
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

    // Input: Prompt the user to enter elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    int matrix1[10][10];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input: Prompt the user to enter elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    int matrix2[10][10];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Perform Matrix Addition
    int additionResult[10][10];
    matrixAddition(rows, columns, matrix1, matrix2, additionResult);

    // Perform Matrix Subtraction
    int subtractionResult[10][10];
    matrixSubtraction(rows, columns, matrix1, matrix2, subtractionResult);

    // Output: Display the matrices and results
    printf("\nMatrix 1:\n");
    displayMatrix(rows, columns, matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(rows, columns, matrix2);

    printf("\nMatrix Addition Result:\n");
    displayMatrix(rows, columns, additionResult);

    printf("\nMatrix Subtraction Result:\n");
    displayMatrix(rows, columns, subtractionResult);

    return 0;
}