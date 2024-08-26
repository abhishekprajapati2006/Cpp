//17 write a program to calculate the no of character or length of given string without using the strlen() function 
#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the input string

    printf("Enter a string: ");
    scanf("%s", str); // Read the input string

    // Calculate the length of the string without using strlen
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
