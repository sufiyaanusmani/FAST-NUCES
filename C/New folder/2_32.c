#include <stdio.h>

int main(){
    float weight, height_cm, height_m, bmi;

    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("\nEnter your height: ");
    scanf("%f", &height_cm);

    height_m = height_cm / 100;
    bmi = weight / (height_m * height_m);
    printf("\n\nBMI = %.2f\n", bmi);

    if(bmi >= 30){
        printf("Obese\n");
    }else if(bmi>=25 && bmi<=29.9){
        printf("Overweight\n");
    }else if(bmi>=18.5 && bmi<=24.9){
        printf("Normal\n");
    }else{
        printf("Underweight\n");
    }
    return 0;
}