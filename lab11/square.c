#include "square.h"
#include "math.h"

void Init(struct Square* figure, const struct Coordinate* point_a,
                                 const struct Coordinate* point_b) {
    figure->point_a = *point_a;
    figure->point_b = *point_b;
}

double ComputeSquareSide(const struct Square* figure) {
    //  Given two endpoints of one side of the square,
    // computes the side of the square

    return sqrt(pow(figure->point_a.x - figure->point_b.x, 2) +
                pow(figure->point_a.y - figure->point_b.y, 2));
}

double Perimeter(const struct Square* figure) {
    return ComputeSquareSide(figure) * 4;
}
double Area(const struct Square* figure) {
    double side_of_square = ComputeSquareSide(figure);
    return side_of_square * side_of_square;
}
