#include "square.h"

void init(Square* figure, int width) {
    figure->side = width;
}

int perimeter(const Square* figure) {
    return figure->side * 4;
}
int area(const Square* figure) {
    return figure->side * figure->side;
}

