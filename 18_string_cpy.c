//18 write a program to copy a string into another string using strcpy() function in c
#include <stdio.h>
#include <string.h> // For strcpy function

int main() {
    char source[100]; // Source string
    char destination[100]; // Destination string

    printf("Enter the source string: ");
    scanf("%s", source); // Read the source string

    // Copy the source string to the destination using strcpy
    strcpy(destination, source);

    printf("Copied string (destination): %s\n", destination);

    return 0;
}
