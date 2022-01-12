// Palindrome
#include <stdio.h>

int main(){
	int num, reverse, temp;
	reverse = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	temp = num;
	
	while(temp != 0){
		reverse = (reverse * 10) + (temp % 10);
		temp /= 10;
	}
	
	if(num == reverse){
		printf("%d is a palindrome", num);
	}else{
		printf("%d is not a palindrome", num);
	}
	return 0;
}