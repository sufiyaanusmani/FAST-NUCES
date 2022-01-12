#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play(int [], int [], int *, int *);

int main(){
	int arr[6];
	int check[6] = {0};
	int i, p1, p2;
	p1 = p2 = 0;
	srand(time(0));
	for(i=0;i<6;i++){
		arr[i] = (rand() % 100) + 1;
	}
	play(arr, check, &p1, &p2);
	printf("Congratulations Player %c on your well deserved success\n", (p1>p2?'A':'B'));
	return 0;
}

void play(int arr[6], int check[6], int *p1, int *p2){
	int i, j, boxNum;
	for(i=1;i<=3;i++){
		for(j=0;j<6;j++){
			if(check[j] == 0){
				printf("Box Number: %d, Cash: %d\n", j+1, arr[j]);
			}
		}
			printf("\n");
			while(1){
				printf("Player 1: ");
				scanf("%d", &boxNum);
				if(check[boxNum-1] == 0){
					*p1 = *p1 + arr[boxNum-1];
					check[boxNum - 1] = 1;
					break; 
				}else{
					printf("ERROR, Box already chosen\n\n");
				}
			}
			for(j=0;j<6;j++){
			if(check[j] == 0){
				printf("Box Number: %d, Cash: %d\n", j+1, arr[j]);
			}
		}
			printf("\n");
			while(1){
				printf("Player 2: ");
				scanf("%d", &boxNum);
				if(check[boxNum-1] == 0){
					*p2 = *p2 + arr[boxNum-1];
					check[boxNum - 1] = 1;
					break; 
				}else{
					printf("ERROR, Box already chosen\n\n");
				}
			}
		}
	}
