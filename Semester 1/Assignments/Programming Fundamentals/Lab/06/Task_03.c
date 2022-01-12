#include <stdio.h>

int main(){
	char input;
	
	printf("Enter an integer: ");
	scanf(" %c", &input);
		if(input >= '0' && input <= '9'){
			switch(input){
				case '0':
				case '1':
				case '4':
				case '6':
				case '8':
				case '9':
					printf("\n%c is not a prime number\n", input);
					break;
				case '2':
				case '3':
				case '5':
				case '7':
					printf("\n%c is a prime number\n", input);
					break;
			}
		}else if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')){
			switch(input){
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
					printf("\n%c is a vowel\n", input);
					break;
				default:
					printf("\n%c is not a vowel\n", input);
			}
		}else{
			printf("\nNot a valid character\n");
		}
	return 0;
}
