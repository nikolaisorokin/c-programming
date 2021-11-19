#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {
    char first[SIZE], second[SIZE];

    fgets(first, SIZE, stdin);
    fgets(second, SIZE, stdin);

    // (2)
    int n_chars;
    scanf("%d", &n_chars);
    getchar();
    strncat(first, second, n_chars);
    fputs(first, stdout);
    putchar('\n');

    // (5)
    fgets(first, SIZE, stdin);
    fgets(second, SIZE, stdin);
    strcpy(first, second);
    fputs(first, stdout);

    // (8, 9)
    fgets(first, SIZE, stdin);
    printf("Key to search: ");
    char key;
    scanf("%c", &key);
    getchar();

    char* index_of_occurence = strchr(first, key);
    if (index_of_occurence != NULL) {
        printf("first occurence: %ld\n", index_of_occurence-first+1);
        printf("last occurence: %ld\n", strrchr(first, key)-first+1);
    } else {
        printf("can't find\n");
    }

    // (12)
    fgets(first, SIZE, stdin);
    fgets(second, SIZE, stdin);
    printf("%lu\n", strcspn(first, second)); 

    return 0;
}

