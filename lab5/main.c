#include <stdio.h>
#define ROWS 2
#define COLS 2


void PrintArray(int[], size_t);
void MatrixMultiplicationPrint(int[][COLS], int[][COLS]);

int main() {
    int array[] =  {23, 5678, 2, 564, 365, 77, 443};

    PrintArray(array, sizeof(array) / sizeof(array[0]));
    
    int matrix_a[][COLS] = {{1, 1},
                            {0, 1}};
    int matrix_b[][COLS] = {{2, 0},
                            {3, 0}};

    MatrixMultiplicationPrint(matrix_a, matrix_b);

    return 0;
}

void PrintArray(int *array, size_t size) {
    printf("index\telement\n");

    for (size_t i = 0; i < size; ++i) {
        printf("%zu\t%d\n", i, array[i]);
    }
}

void MatrixMultiplicationPrint(int (*ptr_matrix_a)[COLS], int (*ptr_matrix_b)[COLS]) {
    /*

    Prints the result of matrix multipltication 2x2 by 2x2.

    param 1: pointer to the first row of a matrix
    param 2: pointer to the first row of a matrix

    */

    printf("\nMatrix:\n");
    
    int dot_product = 0; 

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            for (int k = 0; k < ROWS; ++k) {
                dot_product += ptr_matrix_a[i][k] * ptr_matrix_b[k][j];
            }

            printf("%d\t", dot_product);
            dot_product = 0;
        }
        printf("\n");
    }
}
