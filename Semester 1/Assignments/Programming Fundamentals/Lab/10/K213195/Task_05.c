#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CountFrequency(int array1[], int);
int i;

int main(){
	int size;
	srand(time(0));
	
	printf("Enter size of array: ");
	scanf("%d", &size);
	
	int array1[size];
	
	for(i=0;i<size;i++){
		array1[i] = (rand() % 11);
	}
	
	printf("Array 1: ");
	for(i=0;i<size;i++){
		printf("%d ", array1[i]);
	}
	
	CountFrequency(array1, size);
	
	return 0;
}

void CountFrequency(int array1[], int size){
	int frequency[11] = {0};
	
	for(i=0;i<size;i++){
		frequency[array1[i]]++;
	}
	printf("\n\nThe frequency of all elements of array:\n");
	for(i=0;i<11;i++){
		if(frequency[i] > 0){
			printf("%-2d occurs %d times\n", i, frequency[i]);
		}
	}
	
}