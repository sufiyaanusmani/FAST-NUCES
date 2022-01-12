#include <stdio.h>

int main(){
	int arr[8];
	int pos, neg, zero, sum, i;
	pos = neg = zero = sum = 0;
	
	for(i=0;i<=7;i++){
		printf("\nEnter a number: ");
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<=7;i++){
		printf(" %d ", arr[i]);
		sum += arr[i];
		if(arr[i] > 0){
			pos++;
		}else if(arr[i] < 0){
			neg++;
		}else{
			zero++;
		}
	}
	
	printf("\n\n+ count: %d\n- count: %d\n0 count: %d", pos, neg, zero);
	return 0;
}
