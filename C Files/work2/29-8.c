#include <stdio.h>
int main(){
    float a,b,c,ans;
    printf("Insert a : ");
    scanf("%f",&a);
    printf("Insert b : ");
    scanf("%f",&b);
    printf("Insert c : ");
    scanf("%f",&c);
    ans = a+b*(2*c - 3/(2*a));
    printf("%f",ans);
    return 0;
}
