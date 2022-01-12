#include <stdio.h>
#include <string.h>

int main(){
	int diff;
	char str1[25], str2[25];
	
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	
	diff = strcmp(str1, str2);
	
	if(diff > 0){
		printf("\nFirst string is greater");
	}else if(diff < 0){
		printf("\nSecond string is greater");
	}else{
		printf("\nBoth strings are equal");
	}
	
	return 0;
}
