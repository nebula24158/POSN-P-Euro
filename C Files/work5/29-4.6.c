#include <stdio.h>
int main(){
        int i,arr[10],even = 0;
    for(i = 0;i < 10;i++)
        scanf("%d",&arr[i]);
    for(i = 0;i < 10;i++)
        if(arr[i] % 2 == 0)
            even++;
    printf("%d",even);
    return 0;
}
