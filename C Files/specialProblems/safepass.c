#include <stdio.h>
int main()
{
    int i,j,k,pass[3][7],safepass[5] = {0,0,0,0,0};
    for(i = 0;i < 3;i++)
    {
        for(j = 0;j < 7;j++)
        {
            scanf("%d",&pass[i][j]);
        }
    }
    for(i = 0;i < 5;i++)
    {
        for(j = 0;j < 3;j++)
        {
            for(k = 0;k < 3;k++)
            {
                safepass[i] += pass[j][k+i];
            }
        }
        printf("%d",safepass[i]);
    }
    return 0;
}
