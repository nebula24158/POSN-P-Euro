#include <stdio.h>
int main(){
    char str[20] = "Debsirin";
    char *ptr = str;
    int i = 0;
    while(i < 20){
        printf("%c",*ptr++);
        i++;
    }
    return 0;
}
