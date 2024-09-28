#include <stdio.h>
int main(){
    char str[40];
    int i = 0,strlen = 0;
    scanf("%[^\n]s",str);
    while(str[i] != '\0')
    {
        strlen++;
        i++;
    }
    for(i = 0;i <= (strlen+1)/2;i++)
    {
        if(str[i] != str[strlen-i])
        {
            printf("not palindrome");
            return 0;
        }

    }
    printf("is palindrome");
    return 0;
}
