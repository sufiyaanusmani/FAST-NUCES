#include <stdio.h>

int main(){
	int i, j, rows;
	
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("\n");
	
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
			if(j<=i){	
				if(i%2==0){
				printf(" * ");
			    }else{
				printf(" # ");
				}
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}