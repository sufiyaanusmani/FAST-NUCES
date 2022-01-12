#include <stdio.h>

int main(){
    int num1, num2, num3, num4;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);
    printf("\nEnter third number: ");
    scanf("%d", &num3);
    printf("\nEnter fourth number: ");
    scanf("%d", &num4);

    if(num1>num2 && num1>num3 && num1>num4){
        printf("\n%d is largest\n", num1);
    }else if(num2>num1 && num2>num3 && num2>num4){
        printf("\n%d is largest\n", num2);
    }else if(num3>num2 && num3>num1 && num3>num4){
        printf("\n%d is largest\n", num3);
    }else if(num4>num2 && num4>num3 && num4>num1){
        printf("\n%d is largest\n", num4);
    }else{
        printf("\nOne or more numbers might be equal\n");
    }
    return 0;
}