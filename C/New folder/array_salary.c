#include <stdio.h>

int main(){
	int arr[6] = {50000, 70000, 55000, 66000, 67000, 72000};
	int total, temp, i, j;
	float avg;
	
	for(i=0;i<=5;i++){
		total += arr[i];
	}
	
	for(i=0;i<=5;i++){
		for(j=i+1;j<=5;j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	avg = total / 6.0;
	for(i=0;i<=5;i++)
	printf(" %d ", arr[i]);
	
	printf("\nTotal: $ %d", total);
	printf("\nAverage: $ %.2f", avg);
	return 0;
}
