#include <stdio.h>
int main(){
    int a[5][3],rowSum[5] = {0,0,0,0,0},columnSum[3] = {0,0,0},i,j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            rowSum[i] += a[i][j];
        }
    }

    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 5; i++)
        {
            columnSum[j] += a[i][j];
        }
    }
    for (i = 0; i < 5; i++)
        {
            printf("Row %d sum is %d\n",i+1,rowSum[i]);
        }
    for (int j = 0; j < 3; j++)
        {
            printf("Column %d sum is %d\n",j+1,columnSum[j]);
        }
    return 0;
}
