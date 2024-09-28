#include <stdio.h>
int main(){
    int num,i;
    scanf("%d",&num);
    if(num > 0){
        for(i = 2;i < num;i++){
            if(num % i == 0){
                printf("%d is not prime",num);
                return 0;
            }
        }
        printf("%d is prime",num);
    }
    return 0;
}
