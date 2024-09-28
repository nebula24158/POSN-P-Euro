#include <stdio.h>
int main()
{
    int min = 1000,max = -1000,num[50],i = 0;
    while(1)
    {
        scanf("%d",&num[i]);
        if(num[i] == -1009)
            break;
        if(num[i] > max)
            max = num[i];
        if(num[i] < min)
            min = num[i];
        i++;
    }
    printf("%d",max - min);
    return 0;
}
