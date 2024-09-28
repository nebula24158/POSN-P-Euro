#include <stdio.h>
int main(){
    int unit,lastLadder;
    long int usage;
    printf("Total Usage:");
    scanf("%d",&unit);
    if(unit<=10){
        lastLadder = unit;
        usage = lastLadder*5;
    }else if(unit<=50){
        lastLadder = unit - 10;
        usage = lastLadder*10 + 5*10;
    }else if(unit<=100){
        lastLadder = unit - 50;
        usage = lastLadder*12 + 5*10 + 10*40;
    }else if(unit<=500){
        lastLadder = unit - 100;
        usage = lastLadder*15 + 5*10 + 10*40 + 12*50;
    }else if(unit<=1000){
        lastLadder = unit - 500;
        usage = lastLadder*18 + 5*10 + 10*40 + 12*50 + 15*400;
    }else if(unit<=5000){
        lastLadder = unit - 1000;
        usage = lastLadder*20 + 5*10 + 10*40 + 12*50 + 15*400 + 18*500;
    }else{
        lastLadder = unit - 5000;
        usage = lastLadder*21 + 5*10 + 10*40 + 12*50 + 15*400 + 18*500 + 20*4000;
    }
    printf("\nTotal Amount:%ld",usage);
    return 0;
}
