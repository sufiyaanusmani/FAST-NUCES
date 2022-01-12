#include <stdio.h>

int main(){
	int num, sum, digit;
	sum = 0;
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	while(num != 0){
		digit = num % 10;
		sum += digit;
		num /= 10;
	}
	
	printf("\nSum: %d", sum);
	
	return 0;
}