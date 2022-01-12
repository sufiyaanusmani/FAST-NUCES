#include <stdio.h>

int main(){
	char ch;
	
	printf("Enter a character: ");
	scanf("%c", &ch);
	printf("\nASCII value of %c: %d", ch, ch);
	
	return 0;
}