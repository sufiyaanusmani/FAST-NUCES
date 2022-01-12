#include <stdio.h>

int main(){
	int num, digitCount;
	digitCount = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num != 0){
		digitCount++;
		num /= 10;
	}
	
	printf("\nNumber of digits: %d\n", digitCount);
	
	return 0;
}