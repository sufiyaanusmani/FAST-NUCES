#include <stdio.h>
#include <string.h>

int main(){
	int i, count;
	count = 0;
	char input[25], search;
	
	printf("Enter a string: ");
	gets(input);
	printf("Enter character to find its frequency: ");
	scanf("%c", &search);
	
	for(i=0;i<=strlen(input);i++){
		if(input[i] == search){
			count++;
		}
	}
	
	printf("\nFrequency of %c : %d", search, count);
	
	return 0;
}
