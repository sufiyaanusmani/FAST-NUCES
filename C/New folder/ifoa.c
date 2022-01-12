#include <stdio.h>

int main(){
	int arr[5][5];
	int i, j, largest;
	int (*ptr)[5] = &arr[0];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Row %d, Column %d: ", i+1, j+1);
			scanf("%d", (*(ptr + i) + j));
		}
	}
	printf("ARRAY\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d  ", *(*(ptr + i) + j));
		}
		printf("\n");
	}
	return 0;
}
