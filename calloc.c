// write a program to pass the arr using  calloc function in c simple progema
#include <stdio.h>
#include <stdlib.h> // For calloc and free

int main() {
    int n; 
    int* arr; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the array using calloc
    arr = (int*)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("You entered the following elements:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
