#include <stdio.h>

int main() {
  
    int octal_number;
    scanf("%o", &octal_number);

    printf("ex.2 (decimal): %d\n", octal_number);
    printf("ex.3 0x%x >> 2 = 0x%x\n", octal_number, octal_number >> 2);
    printf("ex.4 ~0x%x = 0x%x\n", octal_number, ~octal_number);
    
    int hex_number;
    scanf("%x", &hex_number);

    printf("ex.5 0x%x | 0o%o = 0x%x\n", hex_number, octal_number,
           hex_number | octal_number);
    
    return 0;
}

