#include<stdio.h>

int main(){

    int arr[3][3] = {{2,1,-1}, {0,1,0}, {1,3,-1}};
    int inverse[3][3];
    int row1 = (arr[0][0]*(arr[1][1]*arr[1][2]-arr[1][2]*arr[2][1]));
    int row2 = (arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0]));   
    int row3 = (arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]));
    int determinants= (row1-row2+row3);
    if (determinants == 0){
        printf("Inverse of Matrix is not possible\n");
    }

    else {
        inverse[0][0] = (arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1]);
        inverse[0][1] = (arr[0][2]*arr[2][1] - arr[0][1]*arr[2][2]);
        inverse[0][2] = (arr[0][1]*arr[1][2] - arr[0][2]*arr[1][1]);

        inverse[1][0] = (arr[1][2]*arr[2][0] - arr[1][0]*arr[2][2]);
        inverse[1][1] = (arr[0][0]*arr[2] [2] - arr[0][2]*arr[2][0]);
        inverse[1][2] = (arr[0][2]*arr[1][0] - arr[0][0]*arr[1][2]);

        inverse[2][0] = (arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]);
        inverse[2][1] = (arr[0][1]*arr[2][0] - arr[0][0]*arr[2][1]);
        inverse[2][2] = (arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0]);

        printf("Determinants of Matrix is: %d\n\n", determinants);
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d ", inverse [i][j]);
            }
            printf("\n");
        }

        printf("\nAdjoint Matrix is: \n");
        for(int i=0; i<3; i++){ 
            for(int j=0; j<3; j++){
                printf("%d ", inverse[j][i]);
            }
            printf("\n");
        }

        printf("\nInverse of Matrix is: \n");
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d ", (1/determinants*inverse[j][i]));
            }
            printf("\n");
        }
    }
 return 0;

}
