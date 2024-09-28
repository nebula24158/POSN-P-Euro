#include <stdio.h>
int main(){
    float sub1,sub2,sub3,sub4;
    printf("Enter first subject score(100): ");
    scanf("%f",&sub1);
    printf("Enter second subject score(100): ");
    scanf("%f",&sub2);
    printf("Enter third subject score(100): ");
    scanf("%f",&sub3);
    printf("Enter fourth subject score(100): ");
    scanf("%f",&sub4);
    if(sub1 < 0 || sub1 > 100 || sub2 < 0 || sub2 > 100 || sub3 < 0 || sub3 > 100 || sub4 < 0 || sub4 > 100){
        printf("Invalid input!!");
    }else{
        printf("%f",(sub1+sub2+sub3+sub4)/4);
    }
    return 0;

}
