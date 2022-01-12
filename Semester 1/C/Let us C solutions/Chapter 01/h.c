#include <stdio.h>

int main(){
	int num, d1, d2, d3, d4, d5;
	
	printf("Enter a five digit number: ");
	scanf("%d", &num);
	
	d1 = num % 10;
	num = num / 10;
	d2 = num % 10;
	num = num / 10;
	d3= num % 10;
	num = num / 10;
	d4 = num % 10;
	num = num / 10;
	d5 = num;
	
	printf("\nReversed number: %d%d%d%d%d", d1, d2, d3 , d4, d5);
	
	return 0;
}
