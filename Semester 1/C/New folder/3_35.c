#include <stdio.h>
#include <math.h>

int main(){
    char num[5];
    int total = 0;

    printf("Enter a binary number: ");
    gets(num);

    for(int i=0;i<=4;i++){
        if(num[i] == '1'){
            total = total + pow(2, 4-i);
        }
    }

    printf("\n%d", total);
    return 0;
}