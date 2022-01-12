#include <stdio.h>

int main(){
	int c, d, temp;
	
	printf("Enter a first number: ");
	scanf("%d", &c);
	printf("\nEnter a second number: ");
	scanf("%d", &d);
	
	temp = c;
	c = d;
	d = temp;
	
	printf("\n\nFirst number after swapping  : %d", c);
	printf("\nSecond number after swapping : %d", d);
	
	return 0;
}
