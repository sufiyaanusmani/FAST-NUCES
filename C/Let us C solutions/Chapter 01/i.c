#include <stdio.h>

int main(){
	int num, total;
	total = 0;
	
	printf("Enter a four digit number: ");
	scanf("%d", &num);
	
	total = total + (num % 10);
	num = num / 1000;
	total = total + num;
	
	printf("\nSum of first and last digits: %d", total);
	
	return 0;
}
