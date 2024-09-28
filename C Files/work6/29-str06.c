#include <stdio.h>
int main(){
    char str[20] = {'\0'},output[20] = {'\0'};
    int i,skip = 0;
    scanf("%[^\n]s",str);
    for(i = 0;i < 20; i++){
        if(str[19 - i] == '\0'){
            skip++;
            continue;
        }
    output[i - skip] = str[19 - i];
    }
    printf("%s",output);
    return 0;
}

