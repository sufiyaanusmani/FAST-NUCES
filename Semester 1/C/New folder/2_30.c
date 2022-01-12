#include <stdio.h>

int main(){
    int d1, d2, d3, d4, d5, num, remaining;

    printf("Enter a five digit number: ");
    scanf("%d", &num);

    d5 = num % 10;
    remaining = num - d5;
    d4 = (remaining % 100) / 10;
    remaining = remaining - (d4 * 10);
    d3 = (remaining % 1000) / 100;
    remaining = remaining - (d3 * 100);
    d2 = (remaining % 10000) / 1000;
    remaining = remaining - (d2 * 1000); 
    d1 = (remaining % 100000) / 10000;

    printf("\n%d  %d  %d  %d  %d\n", d1, d2, d3, d4, d5);

    return 0;
}