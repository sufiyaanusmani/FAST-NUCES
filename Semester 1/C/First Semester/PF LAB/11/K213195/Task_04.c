#include <stdio.h>
#include <string.h>

int WordCount(char *, int *);

int main(){
	int size;
	char str[300];
	printf("Enter a string: ");
	gets(str);
	size = strlen(str);
	printf("\nWord Count: %d\n", WordCount(str, &size));	
	return 0;
}

int WordCount(char *text, int *size){
	int i, count = 1;
	for(i=0;*(text + i) != '\0';i++){
		if((*(text + i) == ' ' || *(text + i) == '.') && (((*(text + 1 + i) >= 'a' && *(text + 1 + i) <= 'z') || (*(text + 1 + i) >= 'A') && *(text + 1 + i) <= 'Z'))){
			count++;
		}
	}
	return count;
}
