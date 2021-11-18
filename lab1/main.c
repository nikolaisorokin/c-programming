#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    char string[100];
    fgets(string, 100, stdin);

    printf("%d,", number);
    fputs(string, stdout);

    return 0;
}
