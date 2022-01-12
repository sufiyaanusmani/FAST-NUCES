// Write a program in C to calculate the sum of numbers from 1 to n using recursion
#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(){
    int n;
    scanf("%d", &n);
    printf("Sum: %d", sum(n));
    return 0;
}

int sum(int num){
    if(num == 0){
        return 0;
    }else{
        return(num + sum(num - 1));
    }
}