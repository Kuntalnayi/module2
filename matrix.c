#include <stdio.h>

int main() {
    int A[3][3], B[3][3], sum[3][3], mul[3][3];
    int i, j, k;

    // Input for Matrix A
    printf("Enter elements of Matrix A (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input for Matrix B
    printf("\nEnter elements of Matrix B (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Addition
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Matrix Multiplication
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            mul[i][j] = 0;
            for(k = 0; k < 3; k++) {
                mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output: Sum
    printf("\nMatrix Addition (A + B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Output: Multiplication
    printf("\nMatrix Multiplication (A * B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
