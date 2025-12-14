#include <stdio.h>

int x = 10;  

void printValues() {
    int x = 20;  
    printf("Inside function - Local x: %d\n", x);
    printf("Inside function - Global x: %d\n", x);
}

int main() {
    printf("Outside function - Global x: %d\n", x);
    printValues();
    return 0;
}