#include <stdio.h>
int main(){
    char s[40] = {'\0'};
    int i = 0,j = 0,foundit = 1;
    scanf("%[^\n]s",s);
    while(s[i] != '\0')
    {
        j = i+1;

        foundit = 1;
        while(s[j] != '\0')
        {
            if(s[i] == s[j])
            {
                foundit = 0;
                break;
            }
            j++;

        }

        if(foundit)
        {
            printf("%c",s[i]);
            return 0;
        }
        i++;
    }
    return 0;
}
