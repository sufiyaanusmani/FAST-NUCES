#include <stdio.h>

int main(){
	int h, i, num1, num2;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	h = num1>num2?num1:num2;
	
	while(1){
		if(h%num1==0 && h%num2==0){
			break;
		}
		h++;
	}
	
	printf("LCM: %d", h);
	
	return 0;
}
