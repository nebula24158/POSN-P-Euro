#include <stdio.h>
int main(){
    int A[4],B[4],i,j,k,match = 0,matchedA[4] = {5,5,5,5},matchedB[4] = {5,5,5,5},matched = 0;
    for(i = 0;i < 4;i++)
        scanf("%d",&A[i]);
    for(i = 0;i < 4;i++)
        scanf("%d",&B[i]);
    for(i = 0;i < 4;i++){
        for(j = 0;j < 4;j++){
            matched = 0;
            for(k = 0; k < 4;k ++)
                if(i == matchedA[k] || j == matchedB[k]){
                    matched = 1;
                }
            if(A[i] == B[j] && matched == 0){
                match++;
                matchedA[i] = i;
                matchedB[j] = j;
            }
         }
    }
    printf("%d",match);
    return 0;
}

