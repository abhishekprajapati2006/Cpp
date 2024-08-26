//19 write a program to copy a string into another string without using strcpy() function in c
#include <stdio.h>

int main() {
    char source[100]; // Source string
    char destination[100]; // Destination string
    int i;

    printf("Enter the source string: ");
    scanf("%s", source); // Read the source string

    // Copy the source string to the destination
    for (i = 0; source[i] != '\0'; ++i) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; // Add null terminator to the destination

    printf("Copied string (destination): %s\n", destination);

    return 0;
}
