#include <stdio.h>
#include <math.h>

struct Coordinate {
    double x;
    double y;
};

struct Rectangle {
    struct Coordinate left_top, right_top, left_bottom;
};

union Keyboard{
    struct {
        unsigned num_lock : 1;
        unsigned caps_lock : 1;
        unsigned scroll_lock : 1;
    };
    unsigned flags;
};

double AreaOfRectangle(struct Rectangle* figure) {
    double length = sqrt(pow(figure->right_top.x - figure->left_top.x,   2) +
                         pow(figure->right_top.y - figure->left_top.y,   2));
    double width = sqrt( pow(figure->left_top.x - figure->left_bottom.x, 2) +
                         pow(figure->left_top.y - figure->left_bottom.y, 2));
    
    return length * width;
}

int main() {
    enum Months { JANUARY=1, FEBRUARY=2, MARCH, APRIL, MAY, JUNE, JULY, AUGUST,
                  SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

    printf("%d\n", JULY);

    struct Rectangle figure = {{.x = 1.0, .y = 3.0}, {5.0, 3.0}, {1, -3}};
    double area_of_rectangle = AreaOfRectangle(&figure);

    printf("%.3lf\n", area_of_rectangle);

    union Keyboard old_keyboard;
    scanf("%x", &old_keyboard.flags);

    printf("Num Lock is %s\n", old_keyboard.num_lock ? "on" : "off");
    printf("Caps Lock is %s\n", old_keyboard.caps_lock ? "on" : "off");
    printf("Scroll Lock is %s\n", old_keyboard.scroll_lock ? "on" : "off");

    return 0;
}
