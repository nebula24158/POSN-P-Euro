#include <stdio.h>
int main(){
    int sec,minutes,hour,day;
    printf("Enter Seconds of Times:");
    scanf("%d",&sec);
    day = sec/(24*60*60);
    sec -= day*24*60*60;
    hour = sec/(60*60);
    sec -= hour*60*60;
    minutes = sec/60;
    sec -= minutes*60;
    printf("\n%d Days %d Hours %d Minutes and %d Seconds",day,hour,minutes,sec);
    return 0;
}
