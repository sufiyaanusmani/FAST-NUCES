#include <stdio.h>

int main(){
	float const PI = 3.14159;
	float radius, circumference, area;
	
	printf("Enter radius of a circle: ");
	scanf("%f", &radius);
	
	circumference = 2 * PI * radius;
	area = PI * radius * radius;
	
	printf("\nArea: %.2f\nCircumference: %.2f", area, circumference);
	
	return 0;
}