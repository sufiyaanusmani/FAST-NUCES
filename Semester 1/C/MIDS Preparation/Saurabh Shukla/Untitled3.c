#include <stdio.h>

int main(){
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num&1){
		printf("\n%d is a Odd Number\n", num);
	}else{
		printf("\n%d is an Even Number\n", num);
	}
	
	return 0;
}