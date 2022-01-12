#include <stdio.h>

int main(){
	int number, d1, d2, d3, d4, reverse;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	d1 = number % 10;
	number = number / 10;
	d2 = number % 10;
	number = number / 10;
	d3 = number % 10;
	number = number / 10;
	d4 = number;
	reverse = (d1 * 1000) + (d2 * 100) + (d3 * 10) + (d4);
	
	printf("Reverse: %d", reverse);
	return 0;
}