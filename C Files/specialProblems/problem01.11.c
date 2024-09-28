#include <stdio.h>
//no array
int main()
{
    int i = 2,input,ans = 0,pow = 1,pos = 0,j;
    scanf("%d",&input);
    while(input > 0)
    {
         while(input/i != 0)
        {
        pos++;
        i *= 2;
        }
        i/=2;
        for(j = 0;j < pos;j++)
        {
            pow *= 10;
        }
        printf("%d ",i);
        input -= i;
        printf("%d\n",input);
        ans += pow;
        pow = 1;
        pos = 0;
        i = 2;

    }
    printf("%d",ans);
    return 0;


}

