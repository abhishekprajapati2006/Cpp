#include<stdio.h>

int main(){
    int arr1[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
     int mul[3][3];
    printf("Output Matrix:\n");
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            mul[i][j] = 0;
            for(int k=0; k<3; ++k){
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
            printf("%d   ", mul[i][j]);
        }
        printf("\n\n");
    }             
    return 0;
}