#include <stdio.h>
int main(){
    int i;
    char name[40] = {'\0'};
    scanf("%[^\n]s",name);
    for(i = 0;i < 40;i += 2){
        if(name[i] == '\0')
            break;
        printf("%c",name[i]);

    }
    return 0;
}
