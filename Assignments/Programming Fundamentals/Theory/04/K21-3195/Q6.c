#include <stdio.h>

void increment(int arr[10]);

int main(){
	int arr[10], i;
	
	for(i=0;i<=9;i++){
		printf("%d. Enter a number: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\n\nORIGINAL ARRAY:\n");
	for(i=0;i<=9;i++){
		printf("%d  ", arr[i]);
	}
	
	increment(arr);
	
	printf("\n\nINCREMENTED ARRAY:\n");
	for(i=0;i<=9;i++){
		printf("%d  ", arr[i]);
	}
	return 0;
}

void increment(int arr[10]){
	int i;
	for(i=0;i<=9;i++){
		arr[i] = arr[i] + 2;
	}
}
