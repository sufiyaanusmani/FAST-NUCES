#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int arr[20], randomNumber, i, numberToSearch, found;
	found = 0;
	srand(time(0));
	
	do{
		for(i=0;i<=19;i++){
			randomNumber = (rand() % 100) + 1;
			arr[i] = randomNumber;
		}
	
		printf("Enter a number to search: ");
		scanf("%d", &numberToSearch);
	
		for(i=0;i<=19;i++){
			if(arr[i] == numberToSearch){
				found = 1;
				break;
			}
		}
	
		if(found == 1){
			printf("Number found at position %d\n", i);
		}else{
			printf("Number not found\n\n");
		}
	}while(found == 0);
	
	return 0;
}