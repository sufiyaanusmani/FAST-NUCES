#include <stdio.h>

int main(){
	int i;
	float arr[8], max, min;
	max = -9999;
	min = 9999;
	
	for(i=1;i<=7;i++){
		printf("\nEnter temperature for day %d: ", i);
		scanf("%f", &arr[i]);
	}
	for(i=1;i<=7;i++){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	printf("\nMaximum: %.2f", max);
	printf("\nMinimum: %.2f", min);
	
	return 0;
}
