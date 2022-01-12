#include <stdio.h>

int main(){
	int num, digit, ans, temp;
	ans = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;
	
	while(temp != 0){
		digit = temp % 10;
		ans += digit * digit * digit;
		temp = temp / 10;
	}
	if(num == ans){
		printf("\nIt is an Armstrong Number\n");
	}else{
		printf("\nIt is not an Armstrong Number\n");
	}
	return 0;
}