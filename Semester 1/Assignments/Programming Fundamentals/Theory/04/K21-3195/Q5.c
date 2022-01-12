#include <stdio.h>

void sort(int arr[10]);

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
	
	sort(arr);
	
	printf("\n\nSORTED ARRAY:\n");
	for(i=0;i<=9;i++){
		printf("%d  ", arr[i]);
	}
	return 0;
}

void sort(int arr[10]){
	int round, j, temp;
	
	for(round=1;round<=9;round++){
		for(j=0;j<10-round;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
