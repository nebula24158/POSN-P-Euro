#include <stdio.h>
int main()
{
    int i,j = 0;
    char n[11] = {'\0'},rev[11] = {'\0'};
    scanf("%s",n);
    for(i = 11;i >=0;i--)
    {
        if(n[i] == '\0')
            continue;
        rev[j] = n[i];
        j++;
    }
    printf("%s",rev);
    return 0;
}
