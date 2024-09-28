#include <stdio.h>
int main(){
    int min = 2147483647,max = -2147483647,n,i;
    for(i = 0;i < 10;i++){
        scanf("%d",&n);
        if(n > max)
            max = n;
        if(n < min)
            min = n;
    }
    printf("min is:%d max is:%d",min,max);
    return 0;
}
