#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *p = str;
    int count = 0;

    printf("String using pointer: ");

    while (*p != '\0') {
        printf("%c", *p);
        count++;
        p++;
    }

    printf("\nNumber of characters: %d\n", count);

    return 0;
}
