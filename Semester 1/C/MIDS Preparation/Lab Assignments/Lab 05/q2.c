#include <stdio.h>

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num%11 == 0 && num%13 == 0){
		printf("\nCompletely Divisible\n");
	}else{
		printf("\nNot Completely Divisible\n");
	}
	
	return 0;
}