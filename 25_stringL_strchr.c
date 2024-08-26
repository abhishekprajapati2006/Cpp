//write a program to find the last occurrence of a character in a string using strrchr() function.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char target; 
    char* result; 
    printf("Enter a string: ");
    scanf("%s", str); 
    printf("Enter a character to search for: ");
    scanf(" %c", &target); 
    // Find the last occurrence of the character in the string
    result = strrchr(str, target);
    if (result != NULL) {
        printf("Character '%c' found at position %ld (counting from 0).\n", target, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}
