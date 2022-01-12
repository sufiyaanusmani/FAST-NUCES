#include <stdio.h>

int main(){
    int num, pos, max;
    max = -99999;

    for(int i=1;i<=5;i++){
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("\n");
        if(num>max){
            max = num;
            pos = i;
        }
    }
    printf("\nLargest Number: %d", max);
    printf("\nPosition      : %d", pos);
    return 0;
}