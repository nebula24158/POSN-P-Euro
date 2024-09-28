#include <stdio.h>
int main()
{
    char n = 64;
    int i,j,input,level = 0;
    scanf("%d",&input);
    n += input;
    for(i = 0;i < input-1;i++)
    {
        for(j = 0;j < level;j++)
        {
            printf(" ");
        }
        printf("%c",n);
        for(j = 0;j < 2*(input-i)-3;j++)
        {
            printf(" ");
        }
        printf("%c\n",n);
        level++;
        n--;
    }
    for(i = 0;i < input-1;i++)
    {
        printf(" ");
    }
    printf("%c\n",n);
    level = 1;
    for(i = 0;i < input-1;i++)
    {
         n++;
        for(j = 0;j < level;j++)
        {
            printf(" ");
        }
        printf("%c",n);
        for(j = 0;j < 2*(input+i)-3;j++)
        {
            printf(" ");
        }
        printf("%c\n",n);
        level--;

    }
    return 0;
}
