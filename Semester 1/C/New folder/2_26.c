#include <stdio.h>

int main(){
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1%num2 == 0){
        printf("\n%d is a multiple of %d", num1, num2);
    }else{
        printf("\n%d is not a multiple of %d", num1, num2);
    }
    return 0;
}