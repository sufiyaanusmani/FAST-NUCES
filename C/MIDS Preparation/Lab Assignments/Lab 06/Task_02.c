#include <stdio.h>

int main(){
	int num1, num2, num3, min, mid, max, total;
	
	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	total = num1 + num2 + num3;
	min = (num1<num2 && num1<num3)?num1:(num2<num1 && num2<num3?num2:num3);
	max = (num1>num2 && num1>num3)?num1:(num2>num1 && num2>num3?num2:num3);
	mid = total - max - min;
	
	printf("\n%d, %d, %d\n", min, mid, max);
	
	printf("%s", ((num1>0&&num2>0&&num3>0)?"ALL POSITIVE":(num1<0&&num2<0&&num3<0)?"ALL NEGATIVE":(num1==0&&num2==0&&num3==0?"ALL ZERO":"POSITIVE/NEGATIVE")));
	
	return 0;
}
