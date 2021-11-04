#include <stdio.h>
#include <stdlib.h>

void PrintArray(double*, int);

int main() {
    int SIZE = 4;
    double array[SIZE];

    double *p = array;
    double *p_second_case = calloc(SIZE, sizeof(double));

    for (int i = 0; i < SIZE; ++i) {
        double number;
        scanf("%lf", &number);

        array[i] = number;
        *(p_second_case + i) = number;
    }

    PrintArray(p, SIZE);
    PrintArray(p_second_case, SIZE);

    free(p_second_case);

    return 0;
}

void PrintArray(double *p, int size) {
    putchar('\n');
    for (int i = 0; i < size; ++i) {
        printf("[%d]: %.1lf \n",i, *(p + i));
    }
}
