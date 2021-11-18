#include <stdio.h>

int main() {
   int number;
   scanf("%d", &number);

   int left = 100;
   int right = 1000;

   printf("is %d in [%d-%d]? %s\n", number, left, right,
          number >= left  && number <= right ? "YES" : "NO");
   
   scanf("%x", &number);
   printf("%d\n", (number & (1 << 22)) >> 22);

   return 0;
}

