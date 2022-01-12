#include <stdio.h>

int main(){
    float math, phy, comp, total, percentage;

    printf("Enter maths marks: ");
    scanf("%f", &math);
    printf("\nEnter physics marks: ");
    scanf("%f", &phy);
    printf("\nEnter computer science marks: ");
    scanf("%f", &comp);

    total = math + phy + comp;
    percentage = total / 3;

    if(math>=33 && phy>=33 && comp>=33 && percentage>=40){
        printf("\nYou are passed");
    }else{
        printf("\nYou are failed");
    }    
    return 0;
}