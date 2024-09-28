#include <stdio.h>
int main(){
    char str[20] = {'\0'};
    int i,count = 0;
    scanf("%[^\n]s",str);
    for(i = 0;i<20;i++)
        if(str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        else if(str[i] >= 97 && str[i] <= 122) str[i] -= 32;
    printf("%s",str);
    return 0;
}
