#include <stdio.h>

int isXNumber(int);

int main(){
	if(isXNumber(23)){
		printf("It is a XNumber");
	}else{
		printf("It is not a XNumber");
	}
}

int isXNumber(int num){
	int sum, temp, nextAnswer, steps, digit;
	sum = 0;
	steps = 0;
	nextAnswer = num;
	
	while(nextAnswer != 1){
		sum = 0;
		temp = nextAnswer;
		while(temp != 0){
			digit = temp % 10;
			sum = sum + (digit * digit);
			temp = temp / 10;
		}
		steps++;
		nextAnswer = sum;
	}
	printf("Steps: %d\n", steps);
	return(steps<10);
}