#include <stdio.h>

int Sum(int []);
int Min(int []);
int Max(int []);

int i;

int main(){
	int arr[10], sum, min, max;
	
	for(i=0;i<10;i++){
		printf("%d. Enter a number: ", i+1);
		scanf("%d", &arr[i]);
	}	
	
	sum = Sum(arr);
	min = Min(arr);
	max = Max(arr);
	
	printf("\n\nSum: %d\n", sum);
	printf("Min: %d\n", min);
	printf("Max: %d\n", max);
	return 0;
}

int Sum(int arr[]){
	int s = 0;
	for(i=0;i<10;i++){
		s = s + arr[i];
	}
	return s;
}

int Min(int arr[]){
	int minimum = arr[0];
	for(i=0;i<10;i++){
		if(arr[i] < minimum){
			minimum = arr[i];
		}
	}
	return minimum;
}

int Max(int arr[]){
	int maximum = arr[0];
	for(i=0;i<10;i++){
		if(arr[i] > maximum){
			maximum = arr[i];
		}
	}
	return maximum;
}
