#include <stdio.h>
#include <string.h>

int main(){
	char str[25], search;
	int count = 0, i;
	
	printf("Enter a string: ");
	gets(str);
	printf("Enter a character to find the frequency: ");
	fflush(stdin);
	scanf("%c", &search);
	
	for(i=0;i<=strlen(str);i++){
		if(search == str[i]){
			count++;
		}
	}
	printf("Frequency of %c : %d", search, count);
	return 0;
}
