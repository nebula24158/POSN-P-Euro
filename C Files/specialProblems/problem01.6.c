#include <stdio.h>
void left(int n);
void right(int n);
int i,j,direction,size;
int main()
{
    scanf("%d %d",&direction,&size);
    switch(direction)
    {
        case 1:
            left(size);
            right(size);
            break;
        case 2:
            right(size);
            left(size);
            break;
    }
    return 0;
}
void left(int n)
{
   for(i = 1;i <= n;i++)
    {
        for(j = 0;j < n - i;j++)
        {
            printf(" ");
        }
        printf("/\n");
    }
}
void right(int n)
{
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < i;j++)
        {
            printf(" ");
        }
        printf("\\\n");
    }
}
