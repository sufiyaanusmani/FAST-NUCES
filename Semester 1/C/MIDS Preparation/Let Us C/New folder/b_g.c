#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, zeroCount, positiveCount, negativeCount, num, n;
	zeroCount = positiveCount = negativeCount = 0;
	
	printf("Enter number of inputs: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		printf("%d. Enter a number: ", i);
		fflush(stdin);
		scanf("%d", &num);
		if(num > 0){
			positiveCount++;
		}else if(num < 0){
			negativeCount++;
		}else{
			zeroCount++;
		}
	}
	
	printf("Positive: %d\nZero: %d\nNegative: %d\n", positiveCount, zeroCount, negativeCount);
	return 0;
}