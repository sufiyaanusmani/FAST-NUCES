#include <stdio.h>

int main(){
	int num, i, isPrime;
	isPrime = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i=2;i<num;i++){
		if(num%i == 0){
			isPrime = 0;
			break;
		}
	}
	
	if(num >= 2 && isPrime == 1){
		printf("It is a prime number");
	}else{
		printf("It is not a prime number");
	}
	
	return 0;
}
