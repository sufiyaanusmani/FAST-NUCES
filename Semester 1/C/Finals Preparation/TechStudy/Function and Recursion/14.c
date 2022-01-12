// reverse of a number
#include <stdio.h>
#include <stdlib.h>

int reverse(int);

int main(){
    int num;
    scanf("%d", &num);
    printf("%d", reverse(num));
    return 0;
}

int reverse(int num){
    static int rev = 0;
    if(num == 0){
        return rev;
    }else{
        rev = (rev * 10) + num%10;
        reverse(num/10);
    }
}