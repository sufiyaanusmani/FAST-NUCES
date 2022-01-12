#include <stdio.h>

int main(){
	int num, factorial;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
		switch(num){
			case 0:
			case 1:
				factorial = 1;
				printf("\nFactorial: %d\n", factorial);
				break;
			case 2:
				factorial = 2 * 1;
				printf("\nFactorial: %d\n", factorial);
				break;
			case 3:
				factorial = 3 * 2 * 1;
				printf("\nFactorial: %d\n", factorial);
				break;
			case 4:
				factorial = 4 * 3 * 2 * 1;
				printf("\nFactorial: %d\n", factorial);
				break;
			case 5:
				factorial = 5 * 4 * 3 * 2 * 1;
				printf("\nFactorial: %d\n", factorial);
				break;
			case 6:
				factorial = 6 * 5 * 4 * 3 * 2 * 1;
				printf("\nFactorial: %d\n", factorial);
				break;
			case 7:
				factorial = 7 * 6 * 5 * 4 * 3 * 2 * 1;
				printf("\nFactorial: %d\n", factorial);
				break;
			case 8: 
				factorial = 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1;
				printf("\nFactorial: %d\n", factorial);
				break;
			case 9:
				factorial = 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1;
				printf("\nFactorial: %d\n", factorial);
				break;	
			default:
				printf("\nERROR!");
		}
	
	return 0;
}
