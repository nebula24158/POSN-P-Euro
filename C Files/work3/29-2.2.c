#include <stdio.h>
int main(){
    int a,b,c,d,e,even = 0,odd = 0;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    printf("Enter fourth number: ");
    scanf("%d",&d);
    printf("Enter fifth number: ");
    scanf("%d",&e);
    if(a%2 == 0){
        even++;
    }else{odd++;}
     if(b%2 == 0){
        even++;
    }else{odd++;}
     if(c%2 == 0){
        even++;
    }else{odd++;}
     if(d%2 == 0){
        even++;
    }else{odd++;}
     if(e%2 == 0){
        even++;
    }else{odd++;}
    printf("The amount of even number is : %d and odd number is : %d",even,odd);
    return 0;
}
