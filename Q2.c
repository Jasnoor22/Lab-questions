/*
Given two integers, divide them and print the result in float (type conversion).
Example:
Input: 52  Output: 2.5
*/
#include <stdio.h>

int main() {
    int a = 52;
    int b = 20;
    float result = (float)a / b;
    printf("Input: %d  Output: %.1f\n", a, result);
    return 0;
}