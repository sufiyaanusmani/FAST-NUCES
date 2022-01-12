#include <stdio.h>

int main(){
	int num, isPrime = 1, i;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i=2;i<num;i++){
		if(num % i == 0){
			isPrime = 0;
			break;
		}
	}
	
	if(num <= 1 || isPrime == 0){
		printf("Not a prime number");
	}else{
		printf("Prime number");
	}
	
	return 0;
}