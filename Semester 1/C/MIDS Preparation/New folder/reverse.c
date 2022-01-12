#include <stdio.h>

int main(){
	int num, reverse, digit;
	reverse = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num != 0){
		digit = num % 10;
		num = num / 10;
		reverse = (reverse * 10) + digit;
	}
	
	printf("%d", reverse);
	
	return 0;
}