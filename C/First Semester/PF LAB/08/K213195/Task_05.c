#include <stdio.h>
#define SIZE 10

int main(){
	int arr1[SIZE], arr2[SIZE], arr3[SIZE];
	int i;
	
	// initializing arr3 with 0
	for(i=0;i<=SIZE-1;i++){
		arr3[i] = 0;
	}
	
	//taking inputs for arr1
	printf("FOR FIRST ARRAY\n\n");
	for(i=0;i<=SIZE-1;i++){
		printf("%d. Enter number: ", i+1);
		scanf("%d", &arr1[i]);
	}
	
	//taking inputs for arr2
	printf("\nFOR SECOND ARRAY\n\n");
	for(i=0;i<=SIZE-1;i++){
		printf("%d. Enter number: ", i+1);
		scanf("%d", &arr2[i]);
	}
	
	printf("\n\n");
	
	// addition
	printf("Addition of elements: ");
	for(i=0;i<=SIZE-1;i++){
		arr3[i] = arr1[i] + arr2[i];
		printf("%d ", arr3[i]);
	}
	
	// multiplication
	printf("\nMultiplication of elements: ");
	for(i=0;i<=SIZE-1;i++){
		arr3[i] = arr1[i] * arr2[i];
		printf("%d ", arr3[i]);
	}
	
	// multiplication
	printf("\nSubtraction of elements: ");
	for(i=0;i<=SIZE-1;i++){
		arr3[i] = arr1[i] - arr2[i];
		printf("%d ", arr3[i]);
	}
	return 0;
}