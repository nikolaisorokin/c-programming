#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x, y;
} Point;

int LengthOf(int);
double Distance(Point, Point);
void InitArray(int*, int);
void PrintArray(int*);
void Init2dArray(double*, int, int, Point*);

int main() {
    // (3)
    int number;
    scanf("%d", &number);

    int size = LengthOf(number);
    int arr[size];
    int *p = arr;

    InitArray(p, number);
    PrintArray(p);

    // (2)
    int n_points;
    scanf("%d", &n_points);
    int rows = n_points, cols = n_points - 1;
    double *distances;
    distances = malloc(rows * cols * sizeof (*distances));

    Point points[n_points];
    Point *ptr = points;

    for (int i = 0; i < n_points; ++i) {
        scanf("%lf%lf", &(ptr + i)->x, &(ptr + i)->y);
    }

    Init2dArray(distances, rows, cols, ptr);
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

void InitArray(int* p, int number) {
    while (number) {
        *p = number % 10;
        number /= 10;
        ++p;
    }
}

void PrintArray(int* p) {
    while (*p) {
        printf("%d", *p);
        ++p;
    }
    putchar('\n');
}

double Distance(Point first, Point second) {
    return sqrt(pow((first.x - second.x), 2) + pow((first.y - second.y), 2));
}

void Init2dArray(double* arr, int rows, int cols, Point* points) {
    for (int i = 0; i < rows; ++i) {
        int it = 0;
        for (int j = 0; j < cols; ++j) {
            if (j == it && it == i) ++it;
            Point a = *(points + i);
            Point b = *(points + it++);
            arr[i*cols+j] = Distance(a, b);
        }
    }
}