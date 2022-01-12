#include <stdio.h>

int main(){
    int num, one, two, five, ten, fifty, hundred;

    printf("Enter amount: $ ");
    scanf("%d", &num);

    hundred = num / 100;
    num = num - (hundred * 100);
    fifty = num / 50;
    num = num - (fifty * 50);
    ten = num / 10;
    num = num - (ten * 10);
    five = num / 5;
    num = num - (five * 5);
    two = num / 2;
    num = num - (two * 2);
    one = num;

    printf("\nHundred : %d", hundred);
    printf("\nFifty   : %d", fifty);
    printf("\nTen     : %d", ten);
    printf("\nFive    : %d", five);
    printf("\nTwo     : %d", two);
    printf("\nOne     : %d\n", one);
    return 0;
}