#include <stdio.h>

int main(){
	int num, total;
	total = 0;
	
	printf("Enter a five digit number: ");
	scanf("%d", &num);
	
	total = total + (num % 10);
	num = num / 10;
	total = total + (num % 10);
	num = num / 10;
	total = total + (num % 10);
	num = num / 10;
	total = total + (num % 10);
	num = num / 10;
	total = total + num;
	
	printf("\nSum of digits: %d", total);
	return 0;
}
