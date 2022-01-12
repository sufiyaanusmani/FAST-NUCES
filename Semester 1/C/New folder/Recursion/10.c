// factorial of a number

#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main(){
    int num;
    scanf("%d", &num);
    printf("Factorial: %d", factorial(num));
    return 0;
}

int factorial(int num){
    if(num <= 1){
        return 1;
    }else{
        return(num * factorial(num - 1));
    }
}