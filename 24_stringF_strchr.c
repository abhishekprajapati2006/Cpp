#include <stdio.h>
#include <string.h> // For strchr function

int main() {
    char str[100]; // Input string
    char target; // Character to search for
    char* result; // Pointer to the first occurrence

    printf("Enter a string: ");
    scanf("%s", str); // Read the input string

    printf("Enter a character to search for: ");
    scanf(" %c", &target); // Read the character (note the space before %c)

    // Find the first occurrence of the character in the string
    result = strchr(str, target);

    if (result != NULL) {
        printf("Character '%c' found at position %ld.\n", target, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}
