#include <stdio.h>
#define SIZE 10

int main(){
	int sort[SIZE], temp, i, round, choice, flag;
	flag = 0;
	
	for(i=0;i<=9;i++){
		printf("%d. Enter a number: ", i+1);
		scanf("%d", &sort[i]);
	}
	
	printf("\nSort?\n1. Ascending\n2. Descending\n\nEnter your choice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			flag = 1;
			for(round=1;round<=SIZE-1;round++){
				for(i=0;i<=SIZE-1-round;i++){
					if(sort[i] > sort[i+1]){
						temp = sort[i];
						sort[i] = sort[i+1];
						sort[i+1] = temp;
					}
				}
			}
			break;
		case 2:
			flag = 1;
			for(round=1;round<=SIZE-1;round++){
				for(i=0;i<=SIZE-1-round;i++){
					if(sort[i] < sort[i+1]){
						temp = sort[i];
						sort[i] = sort[i+1];
						sort[i+1] = temp;
					}
				}
			}
			break;
		}
	if(flag == 1){
	for(i=0;i<=9;i++){
		printf(" %d ", sort[i]);
	}
}else{
	printf("Wrong choice entered\n");
}
	return 0;
}