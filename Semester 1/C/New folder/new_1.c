#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>

int main()
{
    int choice;

    do{
        printf("Select any one:");
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Factorial\n0. Quit\n\nChoice: ");
        scanf(" %d", &choice);

        switch(choice){
        case 0:
            break;
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            factorial();
            break;
        default:
            printf("\n\aWRONG NUMBER ENTERED");
            break;
        }
    }while(choice != 0);

    return 0;
}

void addition(void){
    int a, b, ans;
    printf("\nEnter first number: ");
    scanf(" %d", &a);
    printf("\nEnter second number: ");
    scanf(" %d", &b);
    ans = a + b;
    printf("\nSum of %d and %d is %d\n", a, b, ans);
    getch();
}

void subtraction(void){
    int a, b, ans;
    printf("\nEnter first number: ");
    scanf(" %d", &a);
    printf("\nEnter second number: ");
    scanf(" %d", &b);
    ans = a - b;
    printf("\nSum of %d and %d is %d\n", a, b, ans);
}

void multiplication(void){
    int a, b, ans;
    printf("\nEnter first number: ");
    scanf(" %d", &a);
    printf("\nEnter second number: ");
    scanf(" %d", &b);
    ans = a * b;
    printf("\nMultiplication of %d and %d is %d\n", a, b, ans);
}

void division(void){
    int a, b, ans;
    printf("\nEnter first number: ");
    scanf(" %d", &a);
    printf("\nEnter second number: ");
    scanf(" %d", &b);
    ans = a / b;
    printf("\nDivision of %d and %d is %d\n", a, b, ans);
}

void factorial(void){
    int a, ans, b;
    ans = 1;
    printf("\nEnter a number: ");
    scanf(" %d", &a);
    b = a;
    while(a > 1){
        ans = ans * a;
        a = a - 1;
    }
    printf("\nFactorial of %d is %d", b, ans);
}