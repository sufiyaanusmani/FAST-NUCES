// sum of digits

#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(){
    int num;
    scanf("%d", &num);
    printf("Sum: %d", sum(num));
    return 0;
}

int sum(int num){
    if(num == 0){
        return 0;
    }else{
        return((num % 10) + sum(num / 10));
    }
}