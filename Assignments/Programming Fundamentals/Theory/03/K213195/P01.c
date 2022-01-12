#include <stdio.h>

int main(){
	int num, octal, n, i;
	octal = 0;
	i = 1;
	
	while(1){
		printf("Enter year of your birth: ");   // only year will be input
		scanf("%d", &num);
		if((num >= 1000) && (num <= 9999)){
			break;
		}else{
			printf("Error: Year must be of 4 digits, please try again\n\n");
		}
	}
	
	while(num != 0){
		n = num % 8;
		octal = octal + (n * i);
		i = i * 10;
		num = num / 8;
	}
	
	printf("\nOctal: %d", octal);
	return 0;
}