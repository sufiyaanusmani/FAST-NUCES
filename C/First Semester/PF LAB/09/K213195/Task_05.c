#include <stdio.h>

int main(){
	int rows, i, j, isSymmetric;
	isSymmetric = 1;
	
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("\n");
	
	int arr[rows][rows], arrTranspose[rows][rows];
	
	for(i=0;i<rows;i++){
		for(j=0;j<rows;j++){
				printf("Enter value of row %d and column %d: ", i+1, j+1);
				scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
	// transposing matrix
	for(i=0;i<rows;i++){
		for(j=0;j<rows;j++){
			arrTranspose[j][i] = arr[i][j];
		}
	}
	
	printf("MATRIX:\n\n");
	// displaying the matrix
	for(i=0;i<rows;i++){
		for(j=0;j<rows;j++){
			printf("%5d", arr[i][j]);
		}
		printf("\n\n");
	}
	
	printf("TRANSPOSE OF THE MATRIX:\n\n");
	// displaying the transpose of the matrix
	for(i=0;i<rows;i++){
		for(j=0;j<rows;j++){
			printf("%5d", arrTranspose[i][j]);
		}
		printf("\n\n");
	}
	
	// checking if both are equal
	for(i=0;i<rows;i++){
		for(j=0;j<rows;j++){
			if(arr[i][j] != arrTranspose[i][j]){
				isSymmetric = 0;
				goto end;
			}
		}
	}
	
	end:
		
		printf("\n");
		
		if(isSymmetric == 1){
			printf("Matrix is symmertric");
		}else{
			printf("Matric is assymetric");
		}
		return 0;
}
