#include <stdio.h>
int main(){
    int day,amount,i,j;
    scanf("%d %d",&day,&amount);
    for(i = 1; i <= amount;){
        for(j = 1; j <= 7; j++){
            if(i > amount)
                break;
            if(day > 1){
                printf("   ");
                day--;
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
    return 0;
}
