// write a program to concatenating two string without using strcat() function in c
#include <stdio.h>

int main() {
    char str1[100]; // First string
    char str2[100]; // Second string
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1); // Read the first string

    printf("Enter the second string: ");
    scanf("%s", str2); // Read the second string

    // Find the length of the first string
    for (i = 0; str1[i] != '\0'; ++i);

    // Concatenate the second string to the first
    for (j = 0; str2[j] != '\0'; ++j, ++i) {
        str1[i] = str2[j];
    }
    str1[i] = '\0'; // Add null terminator to the concatenated string

    printf("Concatenated string: %s\n", str1);

    return 0;
}
