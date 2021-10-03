#include <stdio.h>

int main() {
  
    int octal_number;

    int given_input = scanf("%i", &octal_number);
    if (given_input != 1) { return 1; }

    printf("ex.2 (decimal): %d\n", octal_number);
    printf("ex.3 0x%x >> 2 = 0x%x\n", octal_number, octal_number >> 2);
    printf("ex.4 ~0x%x = 0x%x\n", octal_number, ~octal_number);
    
    int hex_number;

    given_input = scanf("%i", &hex_number);
    if (given_input != 1) { return 1; }
    
    printf("ex.5 0x%x | 0o%o = 0x%x\n", hex_number, octal_number,
           hex_number | octal_number);
    
    return 0;
}
