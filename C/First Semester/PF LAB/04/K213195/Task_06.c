#include <stdio.h>
#include <math.h>

int main(){
	float const PI = 3.14159;
	float radius, circumference, volume;
	
	printf("Enter radius: ");
	scanf("%f", &radius);
	
	circumference = 2 * PI * radius;
	volume = (4 / 3) * PI * pow(radius, 3);
	
	printf("\nArea   : %.2f", circumference);
	printf("\nVolume : %.2f\n", volume); 
}
