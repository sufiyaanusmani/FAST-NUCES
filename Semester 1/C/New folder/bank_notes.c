#include <stdio.h>

int main(){
    int user_input, hundred, fifty, twenty, ten, one, remaining;

    printf("Enter amount: ");
    scanf("%d", &user_input);

    hundred = user_input / 100;
    remaining = user_input % 100;
    fifty = remaining / 50;
    remaining = remaining % 50;
    twenty = remaining / 20;
    remaining = remaining % 20;
    ten = remaining / 10;
    one = remaining % 10;

    printf("\nHundred  : %d", hundred);
    printf("\nFifty    : %d", fifty);
    printf("\nTwenty   : %d", twenty);
    printf("\nTen      : %d", ten);
    printf("\nOne:     : %d", one);
    
    return 0;
}