#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num, arm, i, count, temp, digit;
    count = 0;
    arm = 0;

    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    temp = num;
    while(temp != 0){
        digit = temp % 10;
        arm = arm + pow(digit, count);
        temp /= 10;
    }
    if(num == arm){
        printf("Armstrong Number");
    }else{
        printf("Not an Armstrong number");
    }
    return 0;
}