#include <stdio.h>
int main(){
    char str[20] = {'\0'};
    int i,j,count = 0;
     scanf("%[^\n]s",str);
    char check[] = {'A','E','I','O','U'};
    for(i = 0;i < 5;i++)
        for(j = 0;j < 20;j++)
            if(str[j] == check[i] || str[j] == check[i]+32)
                count ++;
    printf("%d",count);
    return 0;
}
