#include <stdio.h>

int main(){
    float rain_last, rain_current, max;

    printf("Enter last year's highest rainfall: ");
    scanf("%f", &rain_last);
    
    max = rain_last;

    printf("\nEnter current year's highest rainfall: ");
    scanf("%f", &rain_current);

    if(rain_current > rain_last){
        printf("\nThis year received higher rainfall than last year\n");
        max = rain_current;
    }
    return 0;
}