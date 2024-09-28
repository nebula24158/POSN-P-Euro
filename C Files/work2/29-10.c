#include <stdio.h>
#define PI 3.14
int main(){
    float h,l,r,area,volume;
    printf("Enter height : ");
    scanf("%f",&h);
    printf("Enter radius : ");
    scanf("%f",&r);
    l = sqrt((h*h)+(r*r));
    area = (PI*r*l) + (PI*r*r);
    volume =  (PI*r*r*h)/3;
    printf("Surface area is : %f",area);
    printf("\nVolume is : %f",volume);
    return 0;
}
