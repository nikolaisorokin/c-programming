#include <stdio.h>

int main() {
    int number;
    
    int input_number = scanf("%d", &number);

    if (input_number != 1) {
        return 1;
    }

    char string[100];
    fgets(string, 100, stdin);

    printf("%d,", number);
    fputs(string, stdout);

    return 0;
}
