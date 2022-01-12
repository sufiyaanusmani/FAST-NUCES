#include <stdio.h>

int main(){
    float celcius, farenheit;

    printf("Enter temperature in celcius: ");
    scanf("%f", &celcius);

    farenheit = (celcius * 9 / 5) + 32;

    printf("\n%.2f celcius -----> %.2f farenheit\n", celcius, farenheit);

    return 0;
}