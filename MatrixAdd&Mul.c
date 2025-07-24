// Write a program to add and multiply two matrices (2D arrays).
#include <stdio.h>
#define MAX_SIZE 10
void addMatrices(int a[MAX_SIZE][MAX_SIZE], int b[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
void multiplyMatrices(int a[MAX_SIZE][MAX_SIZE], int b[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0; // Initialize the result cell
            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rowsA, colsA, rowsB, colsB;
    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], sum[MAX_SIZE][MAX_SIZE], product[MAX_SIZE][MAX_SIZE];

    // Input dimensions for the first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowsA, &colsA);
    
    // Input elements for the first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input dimensions for the second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowsB, &colsB);

    // Check if addition is possible
    if (rowsA != rowsB || colsA != colsB) {
        printf("Matrices cannot be added due to different dimensions.\n");
        return 1;
    }

    // Input elements for the second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    addMatrices(a, b, sum, rowsA, colsA);
    
    // Print the sum of matrices
    printf("Sum of matrices:\n");
    printMatrix(sum, rowsA, colsA);

    // Check if multiplication is possible
    if (colsA != rowsB) {
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
        return 1;
    }

    // Multiply matrices
    multiplyMatrices(a, b, product, rowsA, colsA, colsB);
    
    // Print the product of matrices
    printf("Product of matrices:\n");
    printMatrix(product, rowsA, colsB);

    return 0;
}