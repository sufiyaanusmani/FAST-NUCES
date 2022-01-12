#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, rev, d1, d2, d3, d4, d5, temp;

    printf("Enter a five digit number: ");
    scanf("%d", &num);
    system("cls");
    temp = num;

    d5 = temp % 10;
    temp = temp / 10;
    d4 = temp % 10;
    temp = temp / 10;
    d3 = temp % 10;
    temp = temp / 10;
    d2 = temp % 10;
    temp = temp / 10;
    d1 = temp;

    rev = (d5 * 10000) + (d4 * 1000) + (d3 * 100) + (d2 * 10) + (d1);
    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", rev);

    if(num == rev){
        printf("\n\nBoth are equal\n");
    }else{
        printf("\n\nBoth are not equal\n");
    }
    return 0;
}