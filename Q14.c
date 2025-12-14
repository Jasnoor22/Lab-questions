//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
int main() {
    char chr;
    printf("Enter your character: ");
    scanf("%c", &chr);
    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' ||
        chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U') {
        printf("Vowel\n");
    } else if ((chr >= 'b' && chr <= 'z') || (chr >= 'B' && chr <= 'Z')) {
        printf("Consonant\n");
    } else {
        printf("Invalid input. Please enter an alphabetic character.\n");
    }
    return 0;
}