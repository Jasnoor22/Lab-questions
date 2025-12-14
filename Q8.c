#include <stdio.h>

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];
    int i;

    for (i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    printf("Elements of the destination array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}