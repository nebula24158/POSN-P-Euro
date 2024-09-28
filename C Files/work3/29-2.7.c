#include <stdio.h>
#define PI 3.14
int main(){
    int n;
    float r;
    printf("Please input radius:");
    scanf("%f",&r);
    printf("\nCalculator Menu:\n\n%24s\n\n%33s\n","1.Find area","2.Find circumference");
    printf("\nChoose menu:");
    scanf("%d",&n);
    if(n == 1){
        printf("\nArea = %.2f",PI*r*r);
    }else if(n == 2){
        printf("\nCircumference = %.2f",2*PI*r);
    }else{
        return 0;
    }
    return 0;
}
