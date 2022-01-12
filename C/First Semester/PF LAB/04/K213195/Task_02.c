#include <stdio.h>
#include <math.h>

int main(){
	float num;
	
	printf("Enter first number: ");
	scanf("%f", &num);

	printf("\nFloor        =  %.2f", floor(num));
	printf("\nCeil         =  %.2f", ceil(num));
	printf("\nSquare       =  %.2f", pow(num, 2));
	printf("\nCube         =  %.2f", pow(num, 3));
	printf("\nSquare Root  =  %.2f", sqrt(num));
	
	return 0;
}
