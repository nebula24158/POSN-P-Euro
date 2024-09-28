#include <stdio.h>
int main()
{
    int input,i,j;
    scanf("%d",&input);
    for(i = 1;i <= input;i++)
    {
        for(j = 0;j < input - i;j++)
        {
            printf(" ");
        }
        for(j = 0;j < 2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
