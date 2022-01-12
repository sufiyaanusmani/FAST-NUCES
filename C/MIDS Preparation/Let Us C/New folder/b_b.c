#include <stdio.h>

int main(){
	int i, num, factorial;
	factorial = 1;
	
	printf("Enter a number to find its factorial: ");
	scanf("%d", &num);
	
	for(i=1;i<=num;i++){
		factorial = factorial * i;
	}
	
	printf("\nFactorial of %d: %d", num, factorial);
	return 0;
}