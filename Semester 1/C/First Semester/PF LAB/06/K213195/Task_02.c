#include <stdio.h>

int main(){
	int num1, num2, num3, total;
	int max, mid, min;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("Enter third number: ");
	scanf("%d", &num3);
	
	total = num1 + num2 + num3;
	
	max = (num1>num2 && num1>num3?num1:(num2>num1 && num2>num3?num2:num3)); 
	min = (num1<num2 && num1<num3?num1:(num2<num1 && num2<num3?num2:num3));
	mid = total - max - min;
	
	printf("\n%d, %d, %d", min, mid, max);
	
	printf("\n%s\n", (num1>0&&num2>0&&num3>0?"ALL POSITIVE":(num1<0&&num2<0&&num3<0?"ALL NEGATIVE":(num1==0&&num2==0&&num3==0?"All zero":"POSITIVE/NEGATIVE"))));
	
	return 0;
}
