#include <stdio.h>

int main(){
	int i, n, total, avg, num;
	total = 0;
	
	printf("Enter number of numbers: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		printf("\nEnter number: ");
		scanf("%d", &num);
		total += num;
	}
	
	avg = total / n;
	
	printf("\nTotal   : %d", total);
	printf("\nAverage : %d", avg);
	
	return 0;
}
