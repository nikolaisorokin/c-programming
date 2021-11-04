#include <stdio.h>

#define SIZE 1024

int main(int argc, char *argv[]) {
    if (argc < 2) {return 1;}

    FILE* file;
    file = fopen(argv[1], "r");

    if (file == NULL) {
        printf("Can't read the file!\n");
        return 1;
    }

    char line[SIZE];

    int i = 0;
    while(fgets(line, SIZE, file)) {
        if (++i % 2 == 0) {
            fputs(line, stdout);
        }
    }

    fclose(file);

    return 0;
}
