#ifndef LAB11_SQUARE_H
#define LAB11_SQUARE_H

typedef struct {
    int side;
} Square;

void init(Square*, int);
int perimeter(const Square*);
int area(const Square*);

#endif //LAB11_SQUARE_H
