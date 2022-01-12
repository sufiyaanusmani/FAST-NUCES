#include <stdio.h>

int main(){
	int m, n, i, j, T;
	T = 0;
	
	printf("Enter number of rows: ");
	scanf("%d", &m);
	printf("Enter number of columns: ");
	scanf("%d", &n);
	
	int arr[m][n];
	
	// input from user
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter value of row %d and column %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(arr[i][j] == 0){
				T++;
			}
		}
	}
	
	printf("\n");
	
	if(T >= ((m * n) / 2)){
		printf("IT IS A SPARSE MATRIX\n");
	}else{
		printf("IT IS NOT A SPARSE MATRIX\n");
	}
	return 0;
}
