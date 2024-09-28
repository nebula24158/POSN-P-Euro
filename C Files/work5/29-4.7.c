#include <stdio.h>
int main(){
        int j,i,arr[10];
    for(i = 0;i < 10;i++)
        scanf("%d",&arr[i]);
    for(i = 0;i < 10;i++){
        printf("%d\t",arr[i]);
        for(j = 0;j < arr[i];j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
