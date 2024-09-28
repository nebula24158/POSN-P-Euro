#include <stdio.h>
int main(){
    float midterm,fin,avg;
    printf("Please enter midterm score:");
    scanf("%f",&midterm);
    printf("\nPlease enter final score:");
    scanf("%f",&fin);
    if(midterm >= 0 && midterm <= 100 && fin >= 0 && fin <= 100 ){
        avg = (midterm+fin)/2;
        if(avg < 50){
            printf("\nYour Score = %.0f %%\nGrade = F,Fail",avg);
        }else if(avg < 80){
            printf("\nYour Score = %.0f %%\nGrade = P,Pass",avg);
        }else{
            printf("\nYour Score = %.0f %%\nGrade = G,Good",avg);
        }
    }
    return 0;
}
