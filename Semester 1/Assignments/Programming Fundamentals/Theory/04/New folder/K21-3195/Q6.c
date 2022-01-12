#include <stdio.h>

void increment(int [], int);

int main(){
	int i, size;
	printf("Enter size of array: ");
	scanf("%d", &size);
	int arr[size];
	
	for(i=0;i<size;i++){
		printf("%d. Enter a number: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\n\nORIGINAL ARRAY:\n");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	
	increment(arr, size);
	
	printf("\n\nINCREMENTED ARRAY:\n");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	return 0;
}

void increment(int arr[], int size){
	int i;
	for(i=0;i<size;i++){
		arr[i] = arr[i] + 2;
	}
}
