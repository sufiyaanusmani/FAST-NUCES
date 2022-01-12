#include <stdio.h>

int main(){
	int num, digit, total, remaining;
	total = 0;
	
	printf("Enter a seven digit number: ");
	scanf("%d", &num);
	
	digit = num % 10;
	remaining = num - digit;
	total += digit;
	digit = (remaining % 100) / 10;
	total += digit;
	remaining = remaining - (digit*10);
	digit = (remaining % 1000) / 100;
	total += digit;
	remaining = remaining - (digit*100);
	digit = (remaining % 10000) / 1000;
	total += digit;
	remaining = remaining - (digit*1000);
	digit = (remaining % 100000) / 10000;
	total += digit;
	digit = (remaining % 1000000) / 100000;
	total += digit;
	remaining = remaining - (digit*10000);
	digit = (remaining % 10000000) / 1000000;
	total += digit;
	remaining = remaining - (digit*100000);
	
	printf("\n\nTotal: %d", total);
	return 0;
}
