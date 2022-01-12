#include <stdio.h>

int main(){
	int num, ans, digit, temp;
	ans = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;
	
	while(temp != 0){
		digit = temp % 10;
		ans += digit * digit * digit;
		temp /= 10;
	}
	
	if(num == ans){
		printf("It is a Armstrong number\n");
	}else{
		printf("It is not a Armstrong number\n");
	}
	return 0;
}
