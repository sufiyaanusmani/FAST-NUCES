#include <stdio.h>

int main(){
	int num[10], i, odd, even;
	odd = 0;
	even = 1;
	
	for(i=0;i<=9;i++){
		printf("%d. Enter a number: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0;i<=9;i++){
		if(num[i] % 2 == 0){
			even = even * num[i];
		}else{
			odd = odd + num[i];
		}
	}
	
	printf("\nResult of odd numbers  : %d", odd);
	printf("\nResult of even numbers : %d\n", even);
	return 0;
}