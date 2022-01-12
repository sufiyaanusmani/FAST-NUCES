#include <stdio.h>

void merge(int *, int, int *, int);
void sort(int *, int, int *, int);

int main(){
	int arr1[100] = {1, 4, 27, 59, 23, 5, 3, -3, 33};
	int arr2[4] = {8, 7, 2, 22};
	int i;
	sort(arr1, 9, arr2, 4);
	merge(arr1, 9, arr2, 4);
	for(i=0;i<13;i++){
		printf("%d  ", arr1[i]);
	}
	return 0;
}

void merge(int *arr1, int bg, int *arr2, int sm){
	int bgIndex, smIndex, mergeIndex;
	bgIndex = bg - 1;
	smIndex = sm - 1;
	mergeIndex = bg + sm - 1;
	while(bgIndex >= 0 && smIndex >= 0){
		if(arr1[bgIndex] > arr2[smIndex]){
			arr1[mergeIndex] = arr1[bgIndex];
			mergeIndex--;
			bgIndex--;
		}else{
			arr1[mergeIndex] = arr2[smIndex];
			mergeIndex--;
			smIndex--;
		}
	}
	if(bgIndex < 0){
		while(smIndex >= 0){
			arr1[mergeIndex] = arr2[smIndex];
			mergeIndex--;
			smIndex--; 
		}
	}else if(smIndex < 0){
		while(bgIndex >= 0){
			arr1[mergeIndex] = arr1[bgIndex];
			mergeIndex--;
			bgIndex--;
		}
	}
}

void sort(int *arr1, int size1, int *arr2, int size2){
	int temp, i, round;
	for(round=1;round<size1;round++){
		for(i=0;i<size1-round;i++){
			if(arr1[i] > arr1[i+1]){
				temp = arr1[i];
				arr1[i] = arr1[i+1];
				arr1[i+1] = temp;
			}
		}
	}
	
	for(round=1;round<size2;round++){
		for(i=0;i<size2-round;i++){
			if(arr2[i] > arr2[i+1]){
				temp = arr2[i];
				arr2[i] = arr2[i+1];
				arr2[i+1] = temp;
			}
		}
	}
}