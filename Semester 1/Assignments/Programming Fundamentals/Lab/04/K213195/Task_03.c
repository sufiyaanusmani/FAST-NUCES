#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("\nEnter second number: ");
	scanf("%d", &num2);
	
	printf("\n\n%d > %d   = %d", num1, num2, num1>num2);
	printf("\n%d < %d   = %d", num1, num2, num1<num2);
	printf("\n%d = %d   = %d", num1, num2, num1==num2);
	printf("\n%d <= %d  = %d", num1, num2, num1<=num2);
	printf("\n%d / %d   = %d", num1, num2, num1/num2);
	printf("\n%d mod %d = %d", num1, num2, num1%num2);
	return 0;
}
