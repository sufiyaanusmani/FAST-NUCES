#include <stdio.h>

int main(){
	int i, j;
	int arr[3][3] = {
						{1, 2, 3},
						{4, 5, 6},
						{7, 8, 9}
	};
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(j >= i){
				printf("%d  ", arr[i][j]);
			}else{
				printf("0  ");
			}
		}
		printf("\n");
	}
	return 0;
}
