#include <stdio.h>

int main(){
	int num1, num2, i, n;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	n = num1>num2?num1:num2;
	
	for(;;){
		if(n%num1==0 && n%num2==0){
			printf("\nLCM: %d", n);
			break;
		}
		n++;
	}
	return 0;
}