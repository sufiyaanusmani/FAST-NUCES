#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int x, y, temp, correctCount, wrongCount, ans, userAns;
	correctCount = wrongCount = 0;
	srand(time(0));
	
	do{
		x = (rand() % 10) + 1;
		y = (rand() % 10) + 1;
		if(x > y){
			temp = x;
			x = y;
			y = temp;
		} 
		ans = x * y;
		printf("%2d * %-2d = ", x, y);
		fflush(stdin);
		scanf("%d", &userAns);
		if(userAns == -1){
			break;
		}else if(userAns == ans){
			correctCount++;
			printf("Correct!");
		}else{
			wrongCount++;
			printf("Wrong!");
		}
		printf("\n\n");
		
	}while(1);
	
	printf("\nCorrect: %d\nWrong: %d", correctCount, wrongCount);
	
	return 0;
}
