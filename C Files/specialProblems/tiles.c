#include <stdio.h>
int main()
{
    int i,j,tileLen,width,length;
    char n = 'A';
    scanf("%d %d %d",&tileLen,&length,&width);
    for(i = 0;i < width;i++)
    {
        for(j = 0;j < length;j++)
        {
            printf("%c",n);
            n++;
            if(n > 64+tileLen)
                n = 'A';
        }
        printf("\n");
    }
    return 0;
}
