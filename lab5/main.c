#include <stdio.h>
#define ROWS 2
#define COLS 2


int main() {
    int array[] =  {23, 5678, 2, 564, 365, 77, 443};

    printf("index\telement\n");
    size_t size = sizeof(array) / sizeof(array[0]);
    for (size_t i = 0; i < size; ++i) {
        printf("%zu\t%d\n", i, array[i]);
    }
    
    int matrix_a[][COLS] = {{1, 1},
                            {0, 1}};
    int matrix_b[][COLS] = {{2, 0},
                            {3, 0}};

    printf("\nMatrix:\n");
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            int dot_product = 0;
            for (int k = 0; k < ROWS; ++k) {
                dot_product += matrix_a[i][k] * matrix_b[k][j];
            }
            printf("%d\t", dot_product);
        }
        putchar('\n');
    }

    return 0;
}
