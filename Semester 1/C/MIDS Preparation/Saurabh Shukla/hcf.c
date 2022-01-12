// HCF
#include <stdio.h>

int main(){
	int num1, num2, smallest, i;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	smallest = num1<num2?num1:num2;
	
	for(i = smallest;i>=1;i--){
		if(num1%i==0 && num2%i==0){
			break;
		}
	}
	
	printf("HCF: %d", i);
	
	return 0;
}