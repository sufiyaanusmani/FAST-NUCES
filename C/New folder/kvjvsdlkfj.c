#include <stdio.h>

int main(){
	int num1, num2, smallest, i, largest, total;
	total = 0;
	
	printf("Enter the two numbers: ");
	scanf("%d %d", &num1, &num2);
	smallest = num1;
	largest = num2;
	if(num2<num1){
		smallest = num2;
		largest = num1;
	}
	printf("\n");
	do{
		printf("%-5d%-5d\n", smallest, largest);
		if(smallest % 2 != 0){
			total += largest;
		}
		smallest /= 2;
		largest *= 2;	
		if(smallest == 1){
			printf("%-5d%-5d\n", smallest, largest);
			total += largest;
			break;
		}
	}while(1);
	printf("The total is %d!", total);
	return 0;
}
