#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[10], i, search, j, k;
	
	srand(time(0));
	
	for(i=0;i<=9;i++){
		arr[i] = (rand() % 10) + 1;
	}
	for(i=0;i<=9;i++){
		printf(" %d ", arr[i]);
	}
	printf("\nEnter a number to search: ");
	scanf("%d", &search);
	
	i = 0;
	do{
		if(arr[i] == search){
			printf("\n%d found at position %d", search, i);
			exit(0);
		}
		i++;
	}while(i<=9);
	printf("\n%d not found", search);
	return 0;
}
