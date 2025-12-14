#include <stdio.h>
#define MAX_SIZE 100
void findMostFrequentElements(int arr[], int size) {
    int frequency[MAX_SIZE] = {0};
    int maxCount = 0;

    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
        if (frequency[arr[i]] > maxCount) {
            maxCount = frequency[arr[i]];
        }
    }
    printf("Element(s) that appear most frequently (%d times): ", maxCount);
    for (int i = 0; i < MAX_SIZE; i++) {
        if (frequency[i] == maxCount) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int arr[MAX_SIZE], size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array (0 to %d):\n", MAX_SIZE - 1);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMostFrequentElements(arr, size);

    return 0;
}
