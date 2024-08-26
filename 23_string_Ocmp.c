#include <stdio.h>

int main() {
    char str1[100]; // First string
    char str2[100]; // Second string

    printf("Enter the first string: ");
    scanf("%s", str1); // Read the first string

    printf("Enter the second string: ");
    scanf("%s", str2); // Read the second string

    // Compare the two strings character by character
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            printf("The strings are different.\n");
            return 0;
        }
        i++;
    }

    // Check if both strings have the same length
    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}
