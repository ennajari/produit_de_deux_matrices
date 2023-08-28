#include <stdio.h>

void multiplyMatrices(int mat1[][3], int mat2[][3], int result[][3], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7},
                     {6, 5, 4},
                     {3, 2, 1}};
    int result[3][3];

    int row1 = 3, col1 = 3, col2 = 3;

    multiplyMatrices(mat1, mat2, result, row1, col1, col2);

    printf("Matrix 1:\n");
    displayMatrix(mat1, row1, col1);

    printf("\nMatrix 2:\n");
    displayMatrix(mat2, col1, col2);

    printf("\nResultant Matrix:\n");
    displayMatrix(result, row1, col2);

    return 0;
}
