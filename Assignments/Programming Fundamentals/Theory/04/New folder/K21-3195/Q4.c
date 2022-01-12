#include <stdio.h>

struct Results{
	int sum;
	int min;
	int max;
};

struct Results result;
struct Results num;
struct Results calculate(int []);
int i;

int main(){
	int arr[10];
	
	for(i=0;i<10;i++){
		printf("%d. Enter a number: ", i+1);
		scanf("%d", &arr[i]);
	}	
	
	result = calculate(arr);
	
	printf("\n\nSum: %d\n", result.sum);
	printf("Min: %d\n", result.min);
	printf("Max: %d\n", result.max);
	return 0;
}

struct Results calculate(int arr[]){
	num.sum = 0;
	num.min = arr[0];
	num.max = arr[0];
	for(i=0;i<10;i++){
		num.sum = num.sum + arr[i];
		if(arr[i] < num.min){
			num.min = arr[i];
		}
		if(arr[i] > num.max){
			num.max = arr[i];
		}
	}
	return num;
}

