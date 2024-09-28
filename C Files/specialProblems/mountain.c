#include <stdio.h>
int main()
{
    int i,j,k,amount,max = 0;
    scanf("%d",&amount);
    int size[amount];
    for(i = 0;i < amount;i++)
    {
        scanf("%d",&size[i]);
        if(size[i] > max)
        {
            max = size[i];
        }
    }
    for(i = max;i > 0;i--)
    {
        for(j = 0;j < amount;j++)
        {
            if(i > size[j])
            {
                for(k = 0;k < size[j]*2;k++)
                {
                    printf(" ");
                }
            }else
                {
                    for(k = 0;k < i-1;k++)
                    {
                        printf(" ");
                    }
                    printf("/");
                    for(k = 0;k < (size[j]-i)*2;k++)
                    {
                        printf(" ");
                    }
                    printf("\\");
                    for(k = 0;k < i-1;k++)
                    {
                        printf(" ");
                    }
                }
        }
        printf("\n");
    }
    return 0;
}
