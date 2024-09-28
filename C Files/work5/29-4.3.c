#include <stdio.h>
int main(){
    int i,arr[10],sum = 0,max,min;
    for(i = 0;i < 10;i++)
        scanf("%d",&arr[i]);
    max = arr[0],min = arr[0];
    for(i = 0;i < 10;i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    for(i = 0;i < 10;i++)
        sum += arr[i];
    printf("%d %.2f %d %d",sum,sum/10.0,max,min);
}
