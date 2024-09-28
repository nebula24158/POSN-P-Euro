#include <stdio.h>
int main(){
    char id[5];
    float base,ot,net;
    printf("Enter your id : ");
    scanf("%s",&id);
    printf("Enter your base salary : ");
    scanf("%f",&base);
    printf("Enter your overtime : ");
    scanf("%f",&ot);
    net = base+ot;
    if(net < 30000){
        printf("Your bonus is : %f",net/100);
    }else if(net < 50000){
        printf("Your bonus is : %f",(net*3)/100);
    }else if(net < 70000){
        printf("Your bonus is : %f",net/20);
    }else if(net < 100000){
        printf("Your bonus is : %f",(net*7)/100);
    }else{
        printf("Your bonus is : %f",net/10);
    }
    return 0;
}
