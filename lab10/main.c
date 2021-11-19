#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point {
    double x, y;
};

int LengthOf(int);
double Distance(struct Point, struct Point);
void InitArray(int**, int*, int);
void PrintArray(int*);
void Init2dArray(double**, int, int, struct Point*);

int main() {
    // (3)
    int number;
    scanf("%d", &number);

    int size;
    int* arr;

    InitArray(&arr, &size, number);
    PrintArray(arr);

    free(arr);

    // (2)
    int n_points;
    scanf("%d", &n_points);
    int rows = n_points, cols = n_points - 1;

    struct Point points[n_points];
    struct Point *ptr = points;

    for (int i = 0; i < n_points; ++i) {
        scanf("%lf%lf", &(ptr + i)->x, &(ptr + i)->y);
    }

    double *distances;
    Init2dArray(&distances, rows, cols, ptr);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%lf ", distances[i*cols+j]);
        }
        putchar('\n');
    }

    free(distances);

    return 0;
}

int LengthOf(int number) {
    int length = 0;

    while (number) {
        number /= 10;
        ++length;
    }

    return length;
}

void InitArray(int** arr, int* size, int number) {
    int length = LengthOf(number);
    *size = length;

    int *p = malloc(sizeof(int) * *size);

    int i = 0;
    while (number) {
        p[i] = number % 10;
        number /= 10;
        ++i;
    }

    *arr = p;
}

void PrintArray(int* p) {
    while (*p) {
        printf("%d", *p);
        ++p;
    }
    putchar('\n');
}

double Distance(struct Point first, struct Point second) {
    return sqrt(pow((first.x - second.x), 2) + pow((first.y - second.y), 2));
}

void Init2dArray(double** arr, int rows, int cols, struct Point* points) {
    double* p = malloc(rows * cols * sizeof (*p));

    for (int i = 0; i < rows; ++i) {
        int it = 0;
        for (int j = 0; j < cols; ++j) {
            if (j == it && it == i) ++it;
            struct Point a = *(points + i);
            struct Point b = *(points + it++);
            p[i*cols+j] = Distance(a, b);
        }
    }
    *arr = p;
}