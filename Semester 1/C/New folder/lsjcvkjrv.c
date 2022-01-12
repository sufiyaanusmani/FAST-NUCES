#include <stdio.h>
#include <string.h>

int main(){
	char str[20], rev[20];
	int i, j, l;
	
	printf("Enter a string: ");
	scanf("%s", str);
	
	i = strlen(str);
	l = i - 1;
	
	for(j=0;j<=l;j++){
		rev[j] = str[l-j];
	}
	
	printf("%s", rev);
	return 0;
}
