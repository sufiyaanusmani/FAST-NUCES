#include <stdio.h>

int main(){
    int num1, num2, num3, smallest, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 < num2){
        if(num1 < num3){
            smallest = num1;
        }else{
            smallest = num3;
        }
    }else if(num2 < num1){
        if(num2 < num3){
            smallest = num2;
        }
    }

    printf("\nSmallest : %d", smallest);
    printf("\nLargest  : %d", largest);
    return 0;
}