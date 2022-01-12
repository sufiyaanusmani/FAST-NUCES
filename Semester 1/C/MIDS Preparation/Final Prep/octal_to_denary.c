#include <stdio.h>
#include <math.h>

int main(){
	int octal, denary, digit, i;
	denary = i = 0;
	
	printf("Enter an octal number: ");
	scanf("%d", &octal);
	
	while(octal != 0){
		digit = octal % 10;
		denary += digit * pow(8, i);
		i++;
		octal /= 10;
	}
	
	printf("Denary: %d", denary);
	return 0;
}
