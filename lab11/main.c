#include <stdio.h>
#include "square.h"

int main() {
    int side_length;
    scanf("%d", &side_length);

    Square square;
    init(&square, side_length);
    printf("area of square: %d\nperimeter of square: %d\n", area(&square), perimeter(&square));

    return 0;
}
