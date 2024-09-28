#include <stdio.h>
int main(){
    int num,n = 0,isPrime = 1,i,j;
    scanf("%d",&num);
    for(i = 2;i <= num;i++){
        isPrime = 1;
        for(j = 2;j < i; j++){
            if(i % j == 0)
                isPrime = 0;
        }
        if(isPrime){
            n += 1;
            printf("%d ",i);
        }
    }
    printf("amount of prime is:%d",n);
    return 0;
}
