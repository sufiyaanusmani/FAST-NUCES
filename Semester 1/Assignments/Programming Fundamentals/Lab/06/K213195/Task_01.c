#include <stdio.h>

int main(){
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	printf("%s\n", (num > 0 ? "Positive number" : (num < 0 ? "Negative number" : "Equals to zero"))); 
	return 0;
}
