#include <stdio.h>
int main(){
    char s[60] = {'\0'};
    int amofword = 1,i=-1,j=0,k=0;
    scanf("%[^\n]s",s);


    char list[20][30]= {'0'};

      while(s[i+1] != '\0')
    {
        i++;
        if(s[i] == '.')
        {
            j++;
            k = 0;
            continue;
        }
        list[j][k] = s[i];

        k++;
    }
    for(i = 19;i>=0;i--)
    {
        if(list[i][0] != '\0')
        {
            printf("%s ",list[i]);
        }
    }
}
