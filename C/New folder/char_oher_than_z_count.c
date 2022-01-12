#include <stdio.h>
#include <stdlib.h>

int main(){
	int count = 0;
	char input;
	
	do{
		printf("Enter any character other than z: ");
		fflush(stdin);
		scanf("%c", &input);
		count++;
	}while(input != 'z' && input != 'Z');
	
	printf("\nNumber of characters entered: %d", count);
	
	return 0;
}
