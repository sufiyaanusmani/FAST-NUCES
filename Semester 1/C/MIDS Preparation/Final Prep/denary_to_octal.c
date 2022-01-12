#include <stdio.h>

int main(){
	int denary, octal, i, digit;
	i = 1;
	octal = 0;
	
	printf("Enter a denary number: ");
	scanf("%d", &denary);
	
	while(denary != 0){
		digit = denary % 8;
		octal = octal + (digit * i);
		i *= 10;
		denary /= 8;
	}
	
	printf("Octal: %d", octal);
	return 0;
}
