#include <stdio.h>
#include <stdlib.h>

int main(){
    float dist;

    printf("Enter distance in km: ");
    scanf("%f", &dist);

    system("cls");

    printf("Distance in km: %.2f", dist);
    printf("\nDistance in m:  %.2f", dist*1000);
    printf("\nDistance in ft: %.2f", dist*3280.84);
    printf("\nDistance in in: %.2f", dist*39370.1);
    printf("\nDistance in cm: %.2f\n", dist*100000);
    return 0;
}