#include <stdio.h>
int  main (){
   int num[5] = {3,11,5,28,49};
   int as;
   printf("descending order is:");
    for(int i=0; i<5; i++){
        for (int j = i + 1; j < 5; ++j){
            if (num[i] < num[j]){
                as = num[i];
                num[i] = num[j];
                num[j] = as;
            }
        }
        printf("%d ,", num[i]);
    }
    return 0;
}