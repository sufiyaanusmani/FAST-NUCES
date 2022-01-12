#include <stdio.h>

int main(){
	int t, num, belowZero, isEqual, aboveZero, i;
	belowZero = isEqual = aboveZero = 0;
	
	printf("How many times you want to input a number?\n");
	scanf("%d", &t);
	printf("\n");
	for(i=1;i<=t;i++){
		printf("%d. Enter a number: ", i);;
		scanf("%d", &num);
		if(num < 0){
			belowZero++;
		}else if(num == 0){
			isEqual++;
		}else if(num > 0){
			aboveZero++;
		}else{
			printf("Wrong Input");
		}
	}
	
	printf("\nNumbers below zero: %d", belowZero);
	printf("\nNumbers equal to zero: %d", isEqual);
	printf("\nNumbers greater than zero: %d\n", aboveZero);
	return 0;
}
