#include <stdio.h>
int main(){
      char in[14] = {'\0'},out[18] = {'\0'};
    int i,j = 0;
    scanf("%s",in);
    for(i = 0;i < 18;i ++){
        if(i == 1 || i == 6 || i == 12 || i == 15){
            out[i] = '-';
            continue;
        }
        out[i] = in[j++];

    }
    printf("%s",out);
    return 0;
}
