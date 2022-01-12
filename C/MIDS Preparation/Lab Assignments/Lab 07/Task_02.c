#include <stdio.h>

int main(){
	int num, i, isPrime;
	isPrime = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i=2;i<num;i++){
		if(num % i == 0){
			isPrime = 0;
			break;
		}
	}
	
	if(num > 1 && isPrime == 1){
		printf("\n%d is a prime number\n", num);
		for(i=num;i>=-3;i--){
			printf(" %d ", i);
		}
	}else{
		printf("\n%d is not a prime number\n", num);
	}
	return 0;
}
