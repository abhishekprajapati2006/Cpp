#include <stdio.h>

int main() {
    // Dimensions of the 3D array
    int x = 2; // Number of layers
    int y = 3; // Rows per layer
    int z = 4; // Columns per row

    // Declare and initialize a 3D array
    int arr[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Print the 3D array
    printf("3D Array:\n");
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
