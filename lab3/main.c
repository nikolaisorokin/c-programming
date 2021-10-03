#include <stdio.h>
#include <stdlib.h>

int InputNumber();

int main() {
  
    int octal_number = InputNumber();

    printf("ex.2 (decimal): %d\n", octal_number);
    printf("ex.3 0x%x >> 2 = 0x%x\n", octal_number, octal_number >> 2);
    printf("ex.4 ~0x%x = 0x%x\n", octal_number, ~octal_number);
    
    int hex_number = InputNumber();

    printf("ex.5 0x%x | 0o%o = 0x%x\n", hex_number, octal_number,
           hex_number | octal_number);
    
    return 0;
}

int InputNumber() {
    int number;
    if (scanf("%i", &number) != 1) { exit(1); }
    
    return number;
}
