#include <stdio.h>

int main(){
	int i, n, j, isPrime = 1;
	printf("Enter value of n: ");
	scanf("%d", &n);
	
	for(i=2;i<=n;i++){
		isPrime = 1;
		for(j=2;j<i;j++){
			if(i % j == 0){
				isPrime = 0;
				break;
			}
		}
		if(i >= 2 && isPrime == 1){
			printf("%d\n", i);
		}
	}
}