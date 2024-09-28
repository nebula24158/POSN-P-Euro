#include <stdio.h>
#include <ctype.h>
int main(){
    int i;
    char arr[3][10] = {"deb","sirin","school"};
    for(i = 0;i < 3;i++){
        arr[i][0] = toupper(arr[i][0]);
        printf("%s",arr[i]);
    }

}
