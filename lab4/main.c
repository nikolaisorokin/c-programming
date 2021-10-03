#include <stdio.h>
#include <stdlib.h>

int InputNumber();
int IsInRange(int, int, int);

int main() {
   int number = InputNumber();

   int lhs = 100;
   int rhs = 1000;

   printf("is %d in [%d-%d]? (1 - yes, 0 - no): %d\n", number, lhs, rhs,
          IsInRange(lhs, rhs, number));
   
   int second_number = InputNumber();

   printf("%d\n", (second_number & (1 << 22)) >> 22);

   return 0;
}

int InputNumber() {
    int number;
    
    if (scanf("%i", &number) != 1) { exit(1); }

    return number;
}

int IsInRange(int lhs, int rhs, int number) {
    return (number >= lhs && number <= rhs);
}

