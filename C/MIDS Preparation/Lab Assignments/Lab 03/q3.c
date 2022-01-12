#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, temp;
    system("cls");
    
    printf("Enter first number: ");
    scanf(" %d", &num1);
    printf("Enter second number: ");
    scanf(" %d", &num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("\nnum1 = %d, num2 = %d", num1, num2);
    return 0;
}