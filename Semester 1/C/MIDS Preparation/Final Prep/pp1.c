#include <stdio.h>

int main(){
	int num1, num2, num3, order1, order2, order3, total, newNum, temp;
	total = 0;
	
	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if((num1 > num2) && (num1 > num3)){
		order3 = num1;
		order1 = num2;
		order2 = num3;
	}else if((num2 > num1) && (num2 > num3)){
		order3 = num2;
		order1 = num1;
		order2 = num3;
	}else if((num3 > num1) && (num3 > num2)){
		order3 = num3;
		order1 = num1;
		order2 = num2;
	}
	newNum = order1 + order2;
	if(newNum > order3){
		temp = newNum;
		newNum = order3;
		order3 = temp;
	}
	do{
		printf("%d\t%d\n", newNum, order3);
		if(order3 % 2 == 0){
			total += newNum;
		}
		newNum *= 2;
		order3 /= 2;
	}while(order3 >= 1);
	printf("\nTotal: %d", total);
	return 0;
}
