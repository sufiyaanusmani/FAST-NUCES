#include <stdio.h>

int main(){
	int num, a, total;
	total = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	do{
		a = num % 10;
		total += a;
		printf("%d", a);
		num /= 10;
		if(num != 0){
			printf(" + ");
		}else{
			printf(" = %d", total);
			break;
		}
	}while(1);
	return 0;
}
