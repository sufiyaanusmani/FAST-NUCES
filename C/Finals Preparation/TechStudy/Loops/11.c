#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, digit, product;
    product = 1;
    scanf("%d", &num);

    while(num != 0){
        digit = num % 10;
        product *= digit;
        num /= 10;
    }

    printf("%d", product);
    return 0;
}