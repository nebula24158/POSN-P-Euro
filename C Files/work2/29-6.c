#include <stdio.h>
int main(){
    char select;
    printf("+----+----+----+Menu+----+----+----+");
    printf("\n\n%24s","1. Candy");
    printf("\n\n%24s","2. Water");
    printf("\n\n%24s","3. Snack");
    printf("\n\n%24s","4. Pepsi");
    printf("\n\nSelection :: ");
    select = getche();
    printf("\n\n+----+----+----+----+----+----+----+");
    printf("\n\nYou select menu :: %c",select);
    return 0;
}
