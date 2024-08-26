//16 write a program to calculate the no of character or length of given string using the strlen() functio
#include <stdio.h>
#include <string.h> // For strlen function

int main() {
    char str[100]; // Declare a character array to store the input string

    printf("Enter a string: ");
    scanf("%s", str); // Read the input string

    // Calculate the length of the string using strlen
    int length = strlen(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
