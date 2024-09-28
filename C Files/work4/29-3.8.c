#include <stdio.h>
int main(){
    int n,i,j;
    float e = 1;
    scanf("%d",&n);
    if(n > 0){
        for(i = 1;i <= n; i++){
            e = 1;
            for(j = 1; j <= i;j++){
                e *= 2;
            }
        printf("%3d     %f\n",i,e);
        }
    }else{
        for(i = 1;i >= n; i--){
            e = 1;
            if (i < 0){
                for(j = 0; j > i;j--){
                    e /= 2;
                }
            }else if(i > 0)
                e *= 2;
            else
                e = 1;
        printf("%3d     %f\n",i,e);
        }
    }
    return 0;
}
