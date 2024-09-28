#include <stdio.h>
int main(){
    float n=0,a;
    int i;
    for(i = 0;i <10;i++){
        scanf("%f",&a);
        n += a;
    }
    printf("%f",n/10);
    return 0;
}
