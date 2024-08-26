#include <stdio.h>
#include <string.h> // For strcmp function

int main() {
    char str1[100]; // First string
    char str2[100]; // Second string

    printf("Enter the  str1 string: ");
    scanf("%s", str1); // Read the first string

    printf("Enter the str2 string: ");
    scanf("%s", str2); // Read the second string

    // Compare the two strings using strcmp
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("Str1 is lexicographically smaller than String 2.\n");
    } else {
        printf("Str1 is lexicographically greater than String 2.\n");
    }

    return 0;
}
