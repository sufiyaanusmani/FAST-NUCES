#include <stdio.h>

int main(){
	int num1, num2, ans;
	char op;
	
	printf("Enter first number  : ");
	scanf(" %d", &num1);
	printf("Enter second number : ");
	scanf(" %d", &num2);
	printf("\nEnter operation to perform: ");
	scanf(" %c", &op);
	
	printf("\n\n%d %c %d = %d", num1, op, num2, (op=='+'?num1+num2:(op=='-'?num1-num2:(op=='*'?num1*num2:(op=='/'?num1/num2:"Invalid Operation")))));
	return 0;
}
