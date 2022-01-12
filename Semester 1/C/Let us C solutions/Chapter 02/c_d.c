#include <stdio.h>

int main(){
    int year, mod;

    printf("Enter a year: ");
    scanf("%d", &year);

    mod = year % 7;

    if(mod == 6){
        printf("\nMonday\n");
    }else if(mod == 0){
        printf("\nTuesday\n");
    }else if(mod == 1){
        printf("\nWednesday\n");
    }else if(mod == 2){
        printf("\nThursday\n");
    }else if(mod == 3){
        printf("\nFriday\n");
    }else if(mod == 4){
        printf("\nSaturday\n");
    }else if(mod == 5){
        printf("\nSunday");
    }else{
        printf("\nWrong value entered\n");
    }
    return 0;
}