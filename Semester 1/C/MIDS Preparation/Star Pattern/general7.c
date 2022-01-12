#include <stdio.h>

int main(){
	int i, j, k, rows;
	
	printf("Enter rows: ");
	scanf("%d", &rows);
	
	for(i=1;i<=rows;i++){
		k = 0;
		for(j=1;j<=(2*rows - 1);j++){
			if(j>=(rows+1-i) && j<=(rows-1+i) && k==0){
				printf("*");
				k = 1;
			}else{
				printf(" ");
				k = 0;
			}
		}
		printf("\n");
	}
}