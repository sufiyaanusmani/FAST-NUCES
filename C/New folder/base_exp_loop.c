#include <stdio.h>

int main(){
	int base, exponent, i;
	int ans = 1;
	
	printf("Enter base and exponent: ");
	scanf("%d %d", &base, &exponent);
	
	for(i=1;i<=exponent;i++){
		ans = ans * base; 
	}
	
	printf("\nAnswer: %d", ans);
	
	return 0;
}
