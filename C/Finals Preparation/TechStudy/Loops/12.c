#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, digit, reverse;
    reverse = 0;
    scanf("%d", &num);

    while(num != 0){
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }
    printf("%d", reverse);
    return 0;
}