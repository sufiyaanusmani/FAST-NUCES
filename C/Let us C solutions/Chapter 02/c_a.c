#include <stdio.h>
#include <math.h>

int main(){
    int costPrice, sellingPrice, change;
    
    printf("Enter cost price: $ ");
    scanf("%d", &costPrice);
    printf("\nEnter selling price: $ ");
    scanf("%d", &sellingPrice);

    change = sellingPrice - costPrice;

    if(change > 0){
        printf("\nYou have made profit of $ %d\n", change);
    }else if(change < 0){
        printf("\nYou have made loss of $ %d\n", abs(change));
    }else{
        printf("\nYou have made neither profit nor loss\n");
    }

    return 0;
}