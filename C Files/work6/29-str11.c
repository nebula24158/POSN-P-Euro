#include <stdio.h>
int main(){
    char str[30] = {'\0'};
    int restrung[20],all[30],sum = 0;
    int i = 0,j = 0;
    scanf("%[^\n]s",str);
    while(str[i] != '\0')
    {
        if((i+4) % 5 ==0){
            i++;
            continue;
            }
        restrung[i] = str[i] - 48;
        i++;
    }
    i = 0;
    while(str[i] != '\0'){
        if(restrung[i]*2 >= 10)
        {
            all[j] = (restrung[i]*2)/10;
            j++;
            all[j] = (restrung[i]*2) % 10;
            j++;
        }else
        {
            all[j] = restrung[i];
            j++;
        }
        i +=2;
    }
    j = 0;
    while(all[j] != '\0')
    {
        sum += all[j];
        j++;
    }
    if(sum % 10 == 0)
            printf("Valid card");
    else printf("card does not exist");
    return 0;
}
