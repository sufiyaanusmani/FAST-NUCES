#include <stdio.h>

int main(){
	int num, digit, reverse;
	reverse = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num != 0){
		digit = num % 10;
		reverse = (reverse * 10) + digit;
		num /= 10;		
	}
	
	printf("\nReverse: %d", reverse);
	
	return 0;
}