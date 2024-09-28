#include <stdio.h>
int main(){
    char chr;
    scanf("%c",&chr);
    int dec = chr,i;
    if(dec >= 97 && dec <= 122)
        dec -= 32;
    if(dec >= 65 && dec <= 90){
        for(i = dec;i >= 65;i--){
            printf("%c ",i);
        }
    }
    return 0;
}
