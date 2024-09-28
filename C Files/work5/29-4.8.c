#include <stdio.h>
int main(){
    int a[3][2], b[3][2],ans[3][2],i,j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            ans[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t",ans[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
