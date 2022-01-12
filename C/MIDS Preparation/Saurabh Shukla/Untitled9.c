#include <stdio.h>

int main(){
	int i, n;
	
	printf("Enter numbers to print: ");
	scanf("%d", &n);
	
	for(i=n;i>=1;i--){
		printf(" %d ", i);
	}
	
	
	return 0;
}