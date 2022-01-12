#include <stdio.h>

int main(){
	int num, reverse, digit, temp;
	reverse = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;
	
	while(temp != 0){
		digit = temp % 10;
		reverse = (reverse * 10) + digit;
		temp = temp / 10;
	}
	
	printf("Reverse: %d", reverse);
	
	if(num == reverse){
		printf("\nIt is a palindrome");
	}else{
		printf("\nIt is not a palindrome");
	}
	return 0;
}
