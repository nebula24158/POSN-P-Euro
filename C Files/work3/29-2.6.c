#include <stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    int dec = ch;
    if(dec <= 90 && dec >= 65){
        dec += 32;
    }else if(dec <= 122 && dec >= 97){
        dec -= 32;
    }else{
        printf("error");
        return 0;
    }
    printf("%c",dec);
    return 0;
}
