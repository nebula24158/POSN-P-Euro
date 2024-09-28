#include <stdio.h>
#define M "Mr."
#define F "Mrs."
int main(){
    int i,j=0;
    char name[30],lastname[30],gender[5],str[50];
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your lastname:");
    scanf("%s",lastname);
    printf("Enter your gender:");
    scanf("%s",gender);
    if(gender[0] == 'M' || gender[0] == 'm'){
        for(i = 0;i <50;i++)
        {
            if(M[j] != '\0')
            {
                str[i] = M[j];
                j++;
            }
            else
            {
                j = 0;
                break;
            }
        }
        for(;i <50;i++)
        {
            if(name[j] != '\0')
            {
                str[i] = name[j];
                j++;
            }
            else
            {
                j = 0;
                break;
            }
        }
        str[i] = ' ';
        i++;
        for(;i <50;i++)
        {
            if(lastname[j] != '\0')
            {
                str[i] = lastname[j];
                j++;
            }
            else
            {
                j = 0;
                break;
            }
        }
    }else if(gender[0] == 'F' || gender[0] == 'f' ){
        for(i = 0;i <50;i++)
        {
            if(F[j] != '\0')
            {
                str[i] = F[j];
                j++;
            }
            else
            {
                j = 0;
                break;
            }
        }
        for(;i <50;i++)
        {
            if(name[j] != '\0')
            {
                str[i] = name[j];
                j++;
            }
            else
            {
                j = 0;
                break;
            }
        }
        str[i] = ' ';
        i++;
        for(;i <50;i++)
        {
            if(lastname[j] != '\0')
            {
                str[i] = lastname[j];
                j++;
            }
            else
            {
                j = 0;
                break;
            }
        }
    }
    printf("%s",str);
    return 0;

}
