#include <stdio.h>

int main(){
    int cash, hundred, ten, five, three, two, one;

    printf("Enter amount: $ ");
    scanf(" %d",&cash);

    hundred = cash / 100;
    cash = cash % 100;
    ten = cash / 10;
    cash = cash % 10;
    five = cash / 5;
    cash = cash % 5;
    three = cash / 3;
    cash = cash % 3;
    two = cash / 2;
    cash  = cash % 2;
    one = cash;

    printf("\nThere are %d, $100 bills, %d, $10 bills, %d, $5 bills, %d, $3 bills, %d, $2 bills, %d, $1 bill", hundred, ten, five, three, two, one);
    return 0;
}
