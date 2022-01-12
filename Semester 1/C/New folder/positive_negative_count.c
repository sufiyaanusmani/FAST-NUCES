#include <stdio.h>

int main(){
    int num, pos, neg;
    pos = 0;
    neg = 0;

    for(int i=0;i<=4;i++){
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("\n");
        if(num > 0){
            pos += 1;
        }else if(num < 0){
            neg += 1;
        }
    }

    printf("\nCount of positive numbers: %d", pos);
    printf("\nCount of negative numbers: %d", neg);
    return 0;
}