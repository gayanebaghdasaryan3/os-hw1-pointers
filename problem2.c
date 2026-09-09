#include <stdio.h>

int main() {
    int arr[] = {1, 1, 1, 1, 1};
    int *p = arr;

    printf("Original array using pointers:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");

    for (int i = 0; i < 5; i++) {
        *(p + i) += 1;
    }

    printf("New array using pointers:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");

    printf("New array using array name:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
