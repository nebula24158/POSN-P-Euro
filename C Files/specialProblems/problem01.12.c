#include <stdio.h>
int main()
{
    int input,i,j,k = 2,isPrime = 1;
    scanf("%d",&input);
    for(i = 1;i <= input;)
    {
        isPrime = 1;
        for(j = 2;j < k;j++)
        {
            if(k % j == 0)
            {
                isPrime = 0;
            }
        }
        if(isPrime)
        {
            printf("%d ",k);
            i++;
        }
        k++;
    }
    return 0;
}
