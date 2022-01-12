#include <stdio.h>

int main(){
	int total, num;
	total = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num >= 200 && num <= 400){
		total += num;
		printf("Enter a number: ");
		scanf("%d", &num);
	}
	
	printf("\nTotal: %d", total);
	return 0;
}
