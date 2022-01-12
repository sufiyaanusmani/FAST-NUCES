#include <stdio.h>

int main(){
	int i, j, rows, k;
	
	printf("Enter rows: ");
	scanf("%d", &rows);
	
	for(i=1;i<=rows;i++){
		k = 0;
		for(j=1;j<=(2*rows - 1);j++){
			if(j>=(rows+1-i) && j<=(rows-1+i)){
				j<=rows?k++:k--;
				printf("%d", k);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}