#include <stdio.h>
int main(){
    int a[3][3],i,j,columnSum[3] = {0,0,0},rowSum[3] = {0,0,0},sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            rowSum[i] += a[i][j];
        }
    }

    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            columnSum[j] += a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
        {
            printf("Row %d sum is %d\n",i+1,rowSum[i]);
        }
    for (int j = 0; j < 3; j++)
        {
            printf("Column %d sum is %d\n",j+1,columnSum[j]);
        }
    for (j = 0; j < 3; j++)
        {
            sum += a[j][j];
            sum += a[2-j][j];
        }
    printf("diagonal sum is %d",sum);
    return 0;
}
