#include <stdio.h>

int main(){
	float distance;
	
	printf("Enter distance in km: ");
	scanf("%f", &distance);
	
	printf("\n%.2f in meters  : %.2f",distance, distance*1000);
	printf("\n%.2f in feet    : %.2f",distance, distance*3280.84);
	printf("\n%.2f in inches  : %.2f", distance, distance*39370.1);
	printf("\n%.2f in meters  : %.2f", distance, distance*100000);	
	return 0;
}
