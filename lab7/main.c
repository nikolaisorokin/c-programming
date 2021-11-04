#include <stdio.h>

struct Coordinate {
    int x;
    int y;
};

typedef struct {
    struct Coordinate point;
    int length;
    int width;
} Rectangle;

typedef union {
    struct {
        unsigned int num_lock : 1;
        unsigned int caps_lock : 1;
        unsigned int scroll_lock : 1;
    };
    unsigned int flags;
} Keyboard;

int main() {
    enum Months { JANUARY=1, FEBRUARY=2, MARCH=3, APRIL=4, MAY=5, JUNE=6, JULY=7, AUGUST=8, SEPTEMBER=9, OCTOBER=10,
        NOVEMBER=11, DECEMBER=12};

    printf("%d\n", JULY);

    Rectangle figure = {{.x = 5, .y = 7}, .length = 8, .width = 10};
    int area_of_rectangle = figure.width * figure.length;

    printf("%d\n", area_of_rectangle);

    Keyboard old_keyboard;
    scanf("%x", &old_keyboard.flags);

    printf("Num Lock is %s\n", old_keyboard.num_lock ? "on" : "off");
    printf("Caps Lock is %s\n", old_keyboard.caps_lock ? "on" : "off");
    printf("Scroll Lock is %s\n", old_keyboard.scroll_lock ? "on" : "off");

    return 0;
}