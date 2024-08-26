//20 write a program to concatenating two string using strcat() function in c
#include <stdio.h>
#include <string.h> // For strcat function

int main() {
    char str1[100]; // First string
    char str2[100]; // Second string

    printf("Enter the str1 string: ");
    scanf("%s", str1); // Read the first string

    printf("Enter the str2 string: ");
    scanf("%s", str2); // Read the second string

    // Concatenate the second string to the first using strcat
    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
