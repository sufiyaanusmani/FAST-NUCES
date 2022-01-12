#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, i, highest, lowest, range;;
	highest = -9999;
	lowest = 9999;
	
	for(i=1;i<=10;i++){
		printf("%d. Enter a number: ", i);
		fflush(stdin);
		scanf("%d", &num);
		if(num > highest){
			highest = num;
		}else if(num < lowest){
			lowest = num;
		}
	}
	range = highest - lowest;
	
	printf("\nHighest: %d\nLowest: %d\nRange: %d\n", highest, lowest, range);
	return 0;
}