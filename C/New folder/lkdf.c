#include <stdio.h>
#include <stdlib.h>

void input(int *, int);
void display(int *, int);
void deleteElement(int *, int, int);

int main(){
	int size, deleteIndex;
	int *arr;
	printf("Enter size of array: ");
	scanf("%d", &size);
	arr = (int *)malloc(size * sizeof(int));
	input(arr, size);
	display(arr, size);
	printf("Enter position number to delete: ");
	scanf("%d", &deleteIndex);
	deleteElement(arr, size, deleteIndex);
	size--;
	arr = realloc(arr, size*sizeof(int));
	display(arr, size);
	free(arr);
	return 0;
}

void input(int *arr, int size){
	int i;
	for(i=0;i<size;i++){
		printf("A[%d] : ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("\n");
}

void display(int *arr, int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

void deleteElement(int *arr, int size, int posToDelete){
	int i;
	for(i=posToDelete;i<size;i++){
		arr[i] = arr[i+1];
	}
}
