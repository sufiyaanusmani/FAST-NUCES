#include <stdio.h>

int main(){
	int num, i, largest, smallest, n;
	smallest = 9999;
	largest = -9999;
	printf("Enter numbers to input: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		printf("\nEnter the number: ");
		scanf("%d", &num);
		if(num < smallest){
			smallest = num;
		}else if(num > largest){
			largest = num;
		}
	}
	
	printf("\nSmallest : %d", smallest);
	printf("\nLargest  : %d", largest);
	return 0;
}
