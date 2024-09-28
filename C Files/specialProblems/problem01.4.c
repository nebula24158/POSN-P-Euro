#include <stdio.h>
int main()
{
    int input,level,i;
    scanf("%d",&input);
    for(level = 0;level < input;level ++)
    {
        for(i = 0;i < level;i++)
        {
            printf(" ");
        }
        printf("\\");
        for(i = 0; i < (input-level-1)*2;i++)
        {
            printf(" ");
        }
        printf("/\n");
    }
    return 0;
}
