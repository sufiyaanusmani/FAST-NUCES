#include <stdio.h>

int main(){
    float temp_c, temp_f;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temp_f);

    temp_c = (temp_f - 32) * 5/9;

    printf("\n%.2f F in celcius: %.2f C", temp_f, temp_c);
    return 0;
}