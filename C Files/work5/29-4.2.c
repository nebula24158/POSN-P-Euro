#include <stdio.h>
int main(){
    int i,arr[10],sum = 0;
    for(i = 0;i < 10;i++)
        scanf("%d",&arr[i]);
    for(i = 0;i < 10;i++)
        sum += arr[i];
    printf("%d",sum);
    return 0;
}
