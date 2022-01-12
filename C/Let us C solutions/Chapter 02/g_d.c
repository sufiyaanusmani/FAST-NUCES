#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int late;
    float fine;

    printf("Enter late days: ");
    scanf("%d", &late);

    if(late <= 5){
        fine = 0.5;
    }else if(late >= 6 && late <= 10){
        fine = 1;
    }else if(late > 10 && late <= 30){
        fine = 5;
    }else{
        printf("\nMembership cancelled!\n");
        getch();
        exit(0);
    }

    printf("\nFine: PKR %.2f", fine);

    return 0;
}