#include <stdio.h>

int main(){
	int rows, columns, i, j, max;
	
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("Enter number of columns: ");
	scanf("%d", &columns);
	printf("\n");
	
	int arr[rows][columns];
	
	// input from user
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("Enter value of row %d and column %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
	printf("MATRIX:\n\n");
	// displaying the matrix
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			printf("%5d", arr[i][j]);
		}
		printf("\n\n");
	}
	
	max = arr[0][0];	// used as a reference to compare for maximum
	
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}
	
	printf("\nMaximum Value: %d\n", max);
	
	return 0;
}
