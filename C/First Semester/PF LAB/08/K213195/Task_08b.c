#include <stdio.h>

int main(){
	int i, j, rows;
	
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("\n");
	
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
			if(j>=((rows+1)-i)){
				printf("%d", (rows+1)-i);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}