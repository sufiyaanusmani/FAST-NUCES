#include <stdio.h>

int main(){
	int denary, binary, i, digit;
	i = 1;
	binary = 0;
	
	printf("Enter a denary number: ");
	scanf("%d", &denary);
	
	while(denary != 0){
		digit = denary % 2;
		binary = binary + (digit * i);
		i *= 10;
		denary /= 2;
	}
	
	printf("Binary: %d", binary);
	return 0;
}
