#include <stdio.h>

int main() {
    int x = 13;
    int *p = &x;
    int **pp = &p;

    printf("Value of x using pointer: %d\n", *p);
    printf("Value of x using double-pointer: %d\n", **pp);

    return 0;
}
