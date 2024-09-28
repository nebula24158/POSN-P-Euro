#include <stdio.h>
int main()
{
    int i,j,level = 1,amount;
    char a = 'A';
    scanf("%d",&amount);
    for(i = 0;;)
    {
        for(j = 0;j < level;j++)
        {
            if(a > 90)
            {
                a = 'A';
            }
            printf("%c",a);
            a++;
            i++;
            if(i >= amount)
            {
                return 0;
            }
        }
        level++;
        printf("\n");
    }

}
