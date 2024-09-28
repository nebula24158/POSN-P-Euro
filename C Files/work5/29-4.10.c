#include <stdio.h>
int main(){
    int a[3][3],i,j,sum1 = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (j = 0; j < 3; j++)
        {
            sum1 += a[j][j];
            sum1 += a[2-j][j];
        }
    printf("sum is %d",sum1);
    return 0;
}
