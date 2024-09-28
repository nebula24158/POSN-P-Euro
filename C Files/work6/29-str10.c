#include <stdio.h>
int main(){
    char str[50] = {'\0'},reverse[50] = {'\0'},upper[50],check[] = {'A','E','I','O','U'};
    int i,j,skip = 0,strlen = 0;
    int vowel[5] = {0,0,0,0,0};
    printf("Input String1\t= = > ");
    scanf("%[^\n]s",str);
    for(i = 0;i<50;i++)
    {
         for(j = 0;j < 5;j++)
            if(str[i] == check[j] || str[i] == check[j]+32)
                vowel[j]++;
        if(str[i] >= 97 && str[i] <= 122) upper[i]=str[i]-32;
        else upper[i] = str[i];
    }
    for(i = 0;i<50;i++){
        if(str[49 - i] == '\0'){
            skip++;
            continue;
        }
        reverse[i - skip] = str[49 - i];
    }
    for(i = 0;i<50;i++){
        if(str[i] != '\0')
        {
            strlen++;
        }else break;
    }
    printf("Length of String= = > %d Characters\n",strlen);
    printf("Reverse String\t= = > %s\n",reverse);
    printf("Upper String\t= = > %s\n",upper);
    printf("=-=-=-=-=-=-=-=-=-=\n");
    printf("Number of vowel\n");
    printf("=-=-=-=-=-=-=-=-=-=\n");
    printf("A or a = %d\n",vowel[0]);
    printf("E or e = %d\n",vowel[1]);
    printf("I or i = %d\n",vowel[2]);
    printf("O or o = %d\n",vowel[3]);
    printf("U or u = %d\n",vowel[4]);
    printf("=-=-=-=-=-=-=-=-=-=\n");
    return 0;
}
