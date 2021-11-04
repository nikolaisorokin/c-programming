#include <stdio.h>

int IsInRange(int, int, int);

int main() {
   int number;
   scanf("%d", &number);

   int left = 100;
   int right = 1000;

   printf("is %d in [%d-%d]? (1 - yes, 0 - no): %d\n", number, left, right,
          IsInRange(left, right, number));
   
   scanf("%x", &number);
   printf("%d\n", (number & (1 << 22)) >> 22);

   return 0;
}

int IsInRange(int left, int right, int number) {
    return (number >= left && number <= right);
}
