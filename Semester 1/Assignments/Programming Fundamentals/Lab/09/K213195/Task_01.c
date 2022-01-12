#include <stdio.h>

int main(){
	int n, i, sum;
	float avg;
	sum = 0;
	
	printf("Enter size: ");
	scanf("%d", &n);
	printf("\n");
	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("%d. Enter number: ", i+1);
		scanf("%d", &arr[i]);
		if(arr[i] > 0){
			sum += arr[i];
		}
	}
	
	avg = ((float)sum)/ n;
	
	printf("\n\nSum: %d\nAverage: %.2f", sum, avg);
	
	return 0;
}