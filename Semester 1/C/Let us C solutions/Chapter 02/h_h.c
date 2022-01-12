#include <stdio.h>

int main(){
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n\nFirst Number: %d", num1);
    printf("\nSecond Number: %d", num2);
    
    return 0;
}