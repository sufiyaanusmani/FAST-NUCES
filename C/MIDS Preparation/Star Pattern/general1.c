#include <stdio.h>

int main(){
	int i, j, rows;
	printf("Enter rows: ");
	scanf("%d", &rows);
//	printf("Enter columns: ");
//	scanf("%d", &columns);
	
	for(i=1;i<=rows;i++){
		for(j=1;j<=(2*rows - 1);j++){
			if(j<=rows+1-i || j>=rows-1+i){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}