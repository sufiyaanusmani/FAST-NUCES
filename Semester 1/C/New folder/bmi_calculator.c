#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight, height_m, height_cm, bmi;

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("\nEnter your height in cm: ");
    scanf("%f", &height_cm);

    height_m = height_cm / 100;
    bmi = weight / (height_m * height_m);
    system("cls");
    printf("\nBMI: %.2f", bmi);

    if (bmi < 18.5)
    {
        printf("\nUnderweight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("\nNormal\n");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("\nOverweight\n");
    }
    else if (bmi >= 30)
    {
        printf("\nObese\n");
    }
    else
    {
        printf("\nWrong value entered for height or weight\n");
    }
    return 0;
}