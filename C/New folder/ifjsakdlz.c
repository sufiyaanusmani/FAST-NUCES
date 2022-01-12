#include <stdio.h>

int main(){
	int rows, i, j;
	int arr[3][3] = {
						{1, 3, 5},
						{2, 4, 6},
						{9, 8, 7}
	};
	int arr2[3][3];
	int size = 3;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			arr2[i][j] = arr[size-1-i][size-1-j];
		}
	}
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d  ", arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}