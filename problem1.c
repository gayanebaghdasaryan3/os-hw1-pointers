#include <stdio.h>

int main() {
    int x = 13;
    int *p = &x;

    printf("Address of x using variable: %p\n", &x);
    printf("Address of x using address: %p\n", p);

    *p = 89;

    printf("New value of x: %d\n", x);

    return 0;
}
