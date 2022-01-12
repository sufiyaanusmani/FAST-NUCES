#include<stdio.h>

int main(){
	float const pi = 3.14159;
	float radius;
	
	printf("Enter circle's radius: ");
	scanf("%f", &radius);
	
	printf("\nDiameter: %.2f", 2*radius);
	printf("\nCircumference: %.2f", 2*pi*radius);
	printf("\nArea: %.2f\n", pi*radius*radius);
}
