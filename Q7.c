#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, i;

    printf("Enter a number to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Number found at index %d\n", i);
            return 0;
        }
    }

    printf("Number not found\n");
    return 0;
}