#include <stdio.h>
int main(){
    char str[50] = {'\0'};
    int strlen = 0,numcount=0,chrcount = 0,vowelcount=0,i = 0;
    scanf("%[^\n]s",str);
    while(str[i] != '\0')
    {
         if(str[i] >= 48 && str[i] <= 57)
                numcount++;
            else if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            {
                if(str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U'||str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
                    vowelcount++;
                chrcount++;
            }
            strlen++;
            i++;
    }
    printf("String length is:%d\n",strlen);
    printf("Amount of numbers is:%d\n",numcount);
    printf("Amount of characters is:%d\n",chrcount);
    printf("Amount of vowel is:%d\n",vowelcount);
    return 0;
}
