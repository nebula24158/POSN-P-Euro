#include <stdio.h>
int main()
{
    int input,i,j,amount,sum = 0;
    scanf("%d",&input);
    amount = input-3;
    for(i = 1;i <= input;i++)
    {
        for(j = 1;j <= i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i = 2;amount > 0;i++)
    {
        sum += i*amount;
        amount--;
    }
    printf("%d",sum);
    return 0;
}
