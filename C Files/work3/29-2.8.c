#include <stdio.h>
int main(){
    float area,cost;
    printf("Please input area:");
    scanf("%f",&area);
    if(area < 80){
        cost = area*12.50;
    }else if(area <= 200){
        cost = area*10;
    }else if(area <= 400){
        cost = area*7.50;
    }else{
        cost = area*5;
    }
    printf("\nTotal service costs:%.0f baht",cost);
    return 0;
}
