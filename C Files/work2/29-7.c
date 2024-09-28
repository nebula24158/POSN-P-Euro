#include <stdio.h>
int main(){
    int a=2,b=4,c=5;
    a = c--;
    printf("a = %d b = %d c = %d\n",a,b,c);
    a=2,b=4,c=5;
    a = ++c - b;
    printf("a = %d b = %d c = %d\n",a,b,c);
    a=2,b=4,c=5;
    a = --b;
    printf("a = %d b = %d c = %d\n",--a,b,c);
    a=2,b=4,c=5;
    a = c % b;
    printf("a = %d b = %d c = %d\n",a,b,c);
    return 0;
}
