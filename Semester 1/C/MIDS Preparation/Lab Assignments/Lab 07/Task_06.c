#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int p1Score, p2Score;
	int num1, num2, num3;
	char ch;
	p1Score = p2Score = 0;
	
	do{
	// Player 1
	printf("PLAYER 1 TURN\n");
	p1Num1:
	printf("Enter first number: ");
	fflush(stdin);
	scanf("%d", &num1);
	if(num1 >= 'a' && num1 <= 'z'){
		p1Score += num1;
	}else if(num1 >= 'A' && num1 <= 'Z'){
		p1Score += (2 * num1);
	}else{
		printf("Re-enter\n");
		goto p1Num1;
	}
	
	p1Num2:
	printf("Enter second number: ");
	fflush(stdin);
	scanf("%d", &num2);
	if(num1 == num2){
		p1Score /= 2;
	}else{
		if(num2 >= 'a' && num2 <= 'z'){
			p1Score += num2;
		}else if(num2 >= 'A' && num2 <= 'Z'){
			p1Score += (2 * num2);
		}else{
			printf("Re-enter\n");
			goto p1Num2;
		}
	}
	
	p1Num3:
	printf("Enter third number: ");
	fflush(stdin);
	scanf("%d", &num3);
	if((num3 == num2) || (num3 == num1)){
		p1Score /= 2;
	}else{
		if(num3 >= 'a' && num3 <= 'z'){
			p1Score += num1;
		}else if(num3 >= 'A' && num3 <= 'Z'){
			p1Score += (2 * num3);
		}else{
			printf("Re-enter\n");
			goto p1Num3;
		}
	}
	
	system("cls");
	
	// Player 2
	printf("PLAYER 2 TURN\n");
	p2Num1:
	printf("Enter first number: ");
	fflush(stdin);
	scanf("%d", &num1);
	if(num1 >= 'a' && num1 <= 'z'){
		p2Score += num1;
	}else if(num1 >= 'A' && num1 <= 'Z'){
		p2Score += (2 * num1);
	}else{
		printf("Re-enter\n");
		goto p2Num1;
	}
	
	p2Num2:
	printf("Enter second number: ");
	fflush(stdin);
	scanf("%d", &num2);
	if(num1 == num2){
		p2Score /= 2;
	}else{
		if(num2 >= 'a' && num2 <= 'z'){
			p2Score += num2;
		}else if(num2 >= 'A' && num2 <= 'Z'){
			p2Score += (2 * num2);
		}else{
			printf("Re-enter\n");
			goto p2Num2;
		}
	}
	
	p2Num3:
	printf("Enter third number: ");
	fflush(stdin);
	scanf("%d", &num3);
	if((num3 == num2) || (num3 == num1)){
		p2Score /= 2;
	}else{
		if(num3 >= 'a' && num3 <= 'z'){
			p2Score += num1;
		}else if(num3 >= 'A' && num3 <= 'Z'){
			p2Score += (2 * num3);
		}else{
			printf("Re-enter\n");
			goto p2Num3;
		}
	}
	
	system("cls");
	
	if(p1Score > p2Score){
		printf("Player 1 wins");
	}else if(p2Score > p1Score){
		printf("Player 2 wins");
	}else{
		printf("Score Tied!");
	}
	
	printf("\n\nDo you wish to continue [y/n]? ");
	ch = getche();
	system("cls");
}while(ch == 'y' || ch == 'Y');
	return 0;
}
