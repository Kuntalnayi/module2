#include <stdio.h>

// Function to input matrix elements
void inputMatrix(int mat[2][2], int rows, int cols, int number) {
    printf("------------Matrix: %d------------\n", number);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int mat[2][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[2][2], int mat2[2][2], int result[2][2], int r1, int c1, int r2, int c2) {
    // Initialize result matrix to zero
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Main function
int main() {
    int mat1[2][2], mat2[2][2], result[2][2];
    int r1 = 2, c1 = 2, r2 = 2, c2 = 2;

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of Matrix 1 must equal Rows of Matrix 2.\n");
        return 1;
    }

    // Input Matrices
    inputMatrix(mat1, r1, c1, 1);
    inputMatrix(mat2, r2, c2, 2);

    // Display Matrices
    printf("\nMatrix 1:\n");
    displayMatrix(mat1, r1, c1);

    printf("\nMatrix 2:\n");
    displayMatrix(mat2, r2, c2);

    // Multiply and Display Result
    multiplyMatrices(mat1, mat2, result, r1, c1, r2, c2);

    printf("\n------------Result : Multiplication Matrix------------\n");
    displayMatrix(result, r1, c2);
    printf("------------------------------------------------------\n");

    return 0;
}
