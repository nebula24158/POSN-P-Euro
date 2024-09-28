#include <stdio.h>
int main()
{
    int input,i,j;
    printf("Input index:");
    scanf("%d",&input);
    int num[input];
    for(i = 0;i < input;i++)
    {
        printf("Input number[%d]",i);
        scanf("%d",&num[i]);
    }
    for(i = 10;i > 0;i--)
    {
        printf("%2d ",i);
        for(j = 0;j < input;j++)
        {
            if(num[j] < i)
            {
                printf("  ");
            }else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    printf("   ");
    for(i = 0;i < input;i++)
        {
            printf("%d ",i);
        }
    return 0;
}
