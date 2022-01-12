#include <stdio.h>

void sort(int [], int);

int main(){
	int size, i;
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
	
	sort(arr, size);
	
	printf("\n\nSORTED ARRAY (ASCENDING):\n");
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	return 0;
}

void sort(int arr[],int size){
	int round, j, temp;
	
	for(round=1;round<=size-1;round++){
		for(j=0;j<=size-1-round;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
