#include <stdio.h>
#include <conio.h>

int main(){
	int ch, alphaCount, specialCount, i;
	alphaCount = specialCount = 0;
	
	for(i=1;i<=5;i++){
		printf("Enter a character: ");
		ch = getche();
		printf("\n");
		if(ch >= '0' && ch <= '9'){
			printf("Entered character is a number\n");
		}else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
			alphaCount++;
		}else{
			specialCount++;
		}
	}
	
	printf("You entered %d alphabets and %d special characters\n", alphaCount, specialCount);
	return 0;
}