#include <stdio.h>

int main(){
	int num, octal, digit, i;
	octal = 0;
	i = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num != 0){
		digit = num % 8;
		octal = octal + digit*i;
		i = i * 10;
		num = num / 8;
	}
	printf("Octal: %d", octal);
	return 0;
}