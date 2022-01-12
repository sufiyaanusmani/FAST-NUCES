#include <stdio.h>

int main(){
    int number, sum, temp;
    sum = 0;

    printf("Enter a five digit number: ");
    scanf("%d", &number);

    temp = number % 10;
    sum = sum + temp;
    number = number - temp;

    temp = (number % 100);
    sum  = sum + temp/10;
    number = number - temp;

    temp = (number % 1000);
    sum  = sum + temp/100;
    number = number - temp;

    temp = (number % 10000);
    sum  = sum + temp/1000;
    number = number - temp;

    temp = (number % 100000);
    sum  = sum + temp/10000;
    number = number - temp;

    printf("\nSum: %d\n", sum);

    return 0;
}