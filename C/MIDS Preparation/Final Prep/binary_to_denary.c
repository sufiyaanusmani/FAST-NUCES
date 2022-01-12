#include <stdio.h>
#include <math.h>

int main(){
	int binary, denary, digit, i;
	i = denary = 0;
	printf("Enter a binary number: ");
	scanf("%d", &binary);
	
	while(binary != 0){
		digit = binary % 10;
		denary += digit * pow(2, i);
		i++;
		binary /= 10;
	}
	printf("Denary: %d", denary);
	return 0;
}
