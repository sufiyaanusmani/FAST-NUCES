#include <stdio.h>

int main(){
	char ch1, ch2, ch3, ch4, ch5;
	int alphabetCount, specialCount;
	alphabetCount = specialCount = 0;
	
	printf("Enter first character: ");
	scanf(" %c", &ch1);
	if(ch1 >= '0' && ch1 <= '9'){
		printf("Entered character is a Number\n");
	}else if((ch1 >= 'a' && ch1 <= 'z') || (ch1 >= 'A' && ch1 <= 'Z')){
		alphabetCount++;
	}else{
		specialCount++;
	}
	
	printf("\nEnter second character: ");
	scanf(" %c", &ch2);
	if(ch2 >= '0' && ch2 <= '9'){
		printf("Entered character is a Number\n");
	}else if((ch2 >= 'a' && ch2 <= 'z') || (ch2 >= 'A' && ch2 <= 'Z')){
		alphabetCount++;
	}else{
		specialCount++;
	}
	
	printf("\nEnter third character: ");
	scanf(" %c", &ch3);
	if(ch3 >= '0' && ch3 <= '9'){
		printf("Entered character is a Number\n");
	}else if((ch3 >= 'a' && ch3 <= 'z') || (ch3 >= 'A' && ch3 <= 'Z')){
		alphabetCount++;
	}else{
		specialCount++;
	}
	
	printf("\nEnter fourth character: ");
	scanf(" %c", &ch4);
	if(ch4 >= '0' && ch4 <= '9'){
		printf("Entered character is a Number\n");
	}else if((ch4 >= 'a' && ch4 <= 'z') || (ch4 >= 'A' && ch4 <= 'Z')){
		alphabetCount++;
	}else{
		specialCount++;
	}
	
	printf("\nEnter fifth character: ");
	scanf(" %c", &ch5);
	if(ch5 >= '0' && ch5 <= '9'){
		printf("Entered character is a Number\n");
	}else if((ch5 >= 'a' && ch5 <= 'z') || (ch5 >= 'A' && ch5 <= 'Z')){
		alphabetCount++;
	}else{
		specialCount++;
	}
	
	printf("\nNumber of alphabets: %d", alphabetCount);
	printf("\nNumber of special characters: %d", specialCount);
	
	return 0;
}
