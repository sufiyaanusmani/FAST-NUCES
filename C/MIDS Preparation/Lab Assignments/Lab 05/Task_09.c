#include <stdio.h>

int main(){
	int cash, hundred, fifty, ten, five, one, remaining;
	
	printf("Enter cash: ");
	scanf("%d", &cash);
	
	hundred = cash / 100;
	remaining = cash % 100;
	fifty = remaining / 50;
	remaining = remaining % 50;
	ten = remaining / 10;
	remaining = remaining % 10;
	five = remaining / 5;
	one = remaining % 5;
	
	printf("100: %d\n 50: %d\n 10: %d\n  5: %d\n  1: %d\n", hundred, fifty, ten, five, one);
	
	return 0;
}