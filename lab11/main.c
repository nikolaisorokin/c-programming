#include <stdio.h>
#include "square.h"

int main() {
    double point_a_x, point_a_y, point_b_x, point_b_y;
    scanf("%lf %lf %lf %lf", &point_a_x, &point_a_y, &point_b_x, &point_b_y);

    struct Coordinate point_a = {point_a_x, point_a_y};
    struct Coordinate point_b = {point_b_x, point_b_y};

    struct Square square;
    Init(&square, &point_a, &point_b);

    printf("area of square: %d\nperimeter of square: %d\n", (int)Area(&square), (int)Perimeter(&square));

    return 0;
}

