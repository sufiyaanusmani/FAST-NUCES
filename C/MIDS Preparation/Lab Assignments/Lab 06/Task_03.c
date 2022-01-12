#include <stdio.h>

int main(){
	int num, i, isPrime;
	char ch;
	isPrime = 1;
	
	printf("Enter a number: ");
	scanf("%c", &ch);
	
	if(ch >= '0' && ch <= '9'){
		num = ch - 48;
		for(i=2;i<num;i++){
			if(num % i == 0){
				isPrime = 0;
				break;
			}
		}
		if(num > 1 && isPrime == 1){
			printf("Number is prime\n");
		}else{
			printf("Not prime\n");
		}
	}else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
		switch(ch){
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				printf("Vowel\n");
				break;
			default:
				printf("Consonant\n");
				break;
		}
	}else{
		printf("Nothing");
	}
	
	return 0;
}
