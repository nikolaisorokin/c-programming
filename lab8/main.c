#include <stdio.h>
#include <string.h>

#define SIZE 100

void Concat(char*, const char*, int);
void Copy(char*, char*);
int SearchLeft(char*, char);
int SearchRight(char*, char);
int StrcspnImplementation(const char*, const char*);

int main() {
    char first[SIZE], second[SIZE];

    fgets(first, SIZE, stdin);
    fgets(second, SIZE, stdin);

    // (2)
    int n_chars;
    scanf("%d", &n_chars);
    getchar();
    Concat(first, second, n_chars); // strcat(first, second, n_chars)
    fputs(first, stdout);
    putchar('\n');

    // (5)
    fgets(first, SIZE, stdin);
    fgets(second, SIZE, stdin);
    Copy(first, second); // strcpy(first, second);
    fputs(first, stdout);

    // (8, 9)
    // strchr(string, key), strrchr(string, key);
    fgets(first, SIZE, stdin);
    printf("Key to search: ");
    char key;
    scanf("%c", &key);
    getchar();
    printf("%d and %d\n", SearchLeft(first, key), SearchRight(first, key));

    // (12)
    fgets(first, SIZE, stdin);
    fgets(second, SIZE, stdin);
    printf("%d\n", StrcspnImplementation(first, second)); // strcspn(first, second)

    return 0;
}

void Concat(char* string_a, const char* string_b, int n_first_chars) {

    while (*string_a) {
        ++string_a;
    }
    --string_a; // to replace nil-terminator on the first iter. of next loop

    while (*string_b && n_first_chars != 0) {
        *string_a = *string_b;
        ++string_a;
        ++string_b;
        --n_first_chars;
    }
    *string_a = '\0';
}

void Copy(char* string_a, char* string_b) {
    while (*string_b) {
        *string_a = *string_b;
        ++string_a;
        ++string_b;
    }

    *string_a = '\0';
}

int SearchLeft(char* string, const char key) {
    int index = 0;

    while(*string) {
        if (*string == key) { return index; }
        ++string;
        ++index;
    }
    return -1;
}

int SearchRight(char* string, const char key) {
    int current_index = 0, last_index = -1;

    while(*string) {
        if (*string == key) {
            last_index = current_index;
        }
        ++current_index;
        ++string;
    }
    return last_index;
}

int StrcspnImplementation(const char* string_a, const char* string_b) {
    int length = 0;

    if (string_a == NULL || string_b == NULL) return length;

    while (*string_a) {
        if (strchr(string_b, *string_a)) return length;
        ++string_a;
        ++length;
    }

    return length;
}
