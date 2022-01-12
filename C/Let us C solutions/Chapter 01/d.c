#include <stdio.h>

int main(){
	float celcius, fahrenheit;
	
	printf("Enter temperature in fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celcius = (fahrenheit - 32) * 5 / 9;
	printf("%.2f F = %.2f C", fahrenheit, celcius);
	
	return 0;
}
