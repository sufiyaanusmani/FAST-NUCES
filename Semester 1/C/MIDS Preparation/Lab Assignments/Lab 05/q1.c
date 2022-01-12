#include <stdio.h>

int main(){
	int num1, num2, ans;
	char op;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("Enter operator: ");
	scanf(" %c", &op);
	
	ans = (op=='+'?num1+num2:(op=='-'?num1-num2:(op=='*'?num1*num2:num1/num2)));
	
	printf("\n%d %c %d = %d", num1, op, num2, ans);
}