#ifndef LAB11_SQUARE_H
#define LAB11_SQUARE_H

struct Coordinate {
    double x;
    double y;
};

struct Square {
    struct Coordinate point_a, point_b;
};

void Init(struct Square*, const struct Coordinate*, const struct Coordinate*);
double Perimeter(const struct Square*);
double Area(const struct Square*);
double ComputeSquareSide(const struct Square*);

#endif //LAB11_SQUARE_H
