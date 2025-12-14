//Write a program to find common elements between two arrays.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int common[MAX_SIZE];
    int size1, size2, i, j, k = 0;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                int found = 0;
                for (int m = 0; m < k; m++) {
                    if (common[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    common[k++] = arr1[i];
                }
            }
        }
    }
    
    if (k > 0) {
        printf("Common elements between the two arrays: ");
        for (i = 0; i < k; i++) {
            printf("%d ", common[i]);
        }
        printf("\n");
    } else {
        printf("No common elements found between the two arrays.\n");
    }

    return 0;
}
