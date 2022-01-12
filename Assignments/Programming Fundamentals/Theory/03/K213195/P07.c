#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int num, negativeCount, zeroCount, positiveCount; 
	char ch;
	negativeCount = zeroCount = positiveCount = 0;
	
	while(1){
		printf("Enter a number: ");
		fflush(stdin);
		scanf("%d", &num);
		
		if(num < 0){
			negativeCount++;
		}else if(num == 0){
			zeroCount++;
		}else if(num > 0){
			positiveCount++;
		}
		
		
		printf("Do you want to continue [y/n]?  ");
		ch = getche();
		if(ch != 'y' && ch != 'Y'){
			break;
		}
		printf("\n\n");
	}
	printf("\n\nNumber of negatives: %d\n", negativeCount);
	printf("Number of zeros    : %d\n", zeroCount);
	printf("Number of positives: %d\n", positiveCount);
	
	if((negativeCount > positiveCount) && (negativeCount > zeroCount)){
		printf("\nNegative numbers were entered the most\n");
	}else if((zeroCount > positiveCount) && (zeroCount > negativeCount)){
		printf("\nZeros were entered the most\n");
	}else if((positiveCount > zeroCount) && (positiveCount > negativeCount)){
		printf("\nPostive numbers were entered the most\n");
	}else{
		printf("\nSome type of numbers were entered equally\n");
	}
	
	return 0;
}