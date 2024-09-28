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
    for(i = 0;i < max;i++)
    {
        for(j = 0;j < amount;j++)
        {
            if(size[j] > i){
            for(k = 0;k < i;k++)
            {
                printf(" ");
            }
                 printf("\\");
            for(k = 0;k < (size[j]-i-1)*2;k++)
            {
                printf(" ");
            }
            printf("/");
            for(k = 0;k < i;k++)
            {
                printf(" ");
            }
            }else{
                for(k = 0;k < size[j]*2;k++)
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
