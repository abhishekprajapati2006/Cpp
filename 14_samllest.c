#include<stdio.h>

int main(){
    int arr[5] = {108,68,48,28,98};
    int smallest = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]< smallest){
            smallest = arr[i];
        }
    }
    printf("The smallest element in the array is: %d",smallest);
    return 0;
}