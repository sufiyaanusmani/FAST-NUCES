#include <stdio.h>

int main(){
	int num;
	
	printf("Enter a number: ");
	scanf(" %d", &num);
	
	if((num%11 == 0) && (num%13 == 0))
	{
		printf("\nCOMPLETE DIVISIBLE\n");
	}
	else
	{
		printf("\nNOT COMPLETE DIVISIBLE\n");
	}
	return 0;
}
