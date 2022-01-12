#include <stdio.h>

int main(){
	int num1, num2, largest;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	largest = num1>num2?num1:num2;
	
	for(;;){
		if(largest%num1==0 && largest%num2==0){
			break;
		}
		largest++;
	}
	
	printf("LCM: %d", largest);
	
	return 0;
}