#include <stdio.h>

int main(){
	int i, size, sum;
	sum = 0;
	printf("Enter size of array: ");
	scanf("%d", &size);
	printf("\n");
	
	int arr[size];
	int *ptr = arr;
	
	for(i=0;i<size;i++){
		printf("%d. Enter number: ", i+1);
		scanf("%d", ptr+i);
		sum += *(ptr + i);
	}
	
	printf("\nSum: %d", sum);
	return 0;
}
