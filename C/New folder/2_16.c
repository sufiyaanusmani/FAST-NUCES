#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);

    printf("\n----------------------");
    printf("\nSum: %d", num1+num2);
    printf("\nProduct: %d", num1*num2);
    printf("\nDifference: %d", abs(num1-num2));
    printf("\nQuotient: %d", num1/num2);
    printf("\nRemainder: %d\n", num1%num2);

    return 0;
}