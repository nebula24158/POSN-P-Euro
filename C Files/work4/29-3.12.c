
#include <stdio.h>
int main(){
    int day,amount,i,j,n,wait;
    scanf("%d %d",&day,&amount);
    for(n = 0;n < 4; n++){
            wait = day + (amount - 28)*n;
    for(i = 1; i <= amount;){
        for(j = 1; j <= 7; j++){
            if(i > amount)
                break;
            if(wait > 1){
                printf("   ");
                wait--;
                continue;
            }
        if(i < 10)
            printf("%d  ",i);
        else
           printf("%d ",i);
        i++;
        }
        printf("\n");
    }
    }
    return 0;
}
