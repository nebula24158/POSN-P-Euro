#include <stdio.h>
int main(){
    int x,y,i,xdiv=0,ydiv=0,lcm = 1;
    scanf("%d %d",&x,&y);
    while(lcm % x != 0 || lcm % y != 0){
        lcm++;
    }
    for(i = 1;i <= 1000;i++){
        if(i % x == 0)
            xdiv++;
    }
    for(i = 1;i <= 1000;i++){
        if(i % y == 0)
            ydiv++;
    }
    for(i = 1;i <= 1000;i++){
        if(i % lcm == 0)
            printf("%d\n",i);
    }
    printf("there are %d numbers divisible by %d and %d numbers divisible by %d",xdiv,x,ydiv,y);
    return 0;
}
