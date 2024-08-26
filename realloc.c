// write a program to pass the arr using realloc function in c simple progema
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; 
    int* arr; 

    printf("Enter the initial number of elements: ");
    scanf("%d", &n);

    // Allocate memory for the initial array
    arr = (int*)malloc(n * sizeof(int));

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

    // Resize the array (increase its size)
    int newSize;
    printf("Enter the new size of the array: ");
    scanf("%d", &newSize);

    arr = (int*)realloc(arr, newSize * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed. Exiting...\n");
        return 1;
    }

    printf("Enter %d additional elements:\n", newSize - n);
    for (int i = n; i < newSize; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Updated array with %d elements:\n", newSize);
    for (int i = 0; i < newSize; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
