#include <stdio.h>
#include <string.h>

int WordCap(char [], int);

int main(){
	int size, count;
	char str[] = "my name is sufiyaan usmani";
	size = strlen(str);
	count = WordCap(str, size);
	puts(str);
	printf("Count: %d", count);
	return 0;
}

int WordCap(char str[], int size){
	int i, count;
	count = 1;
	if(str[0] >= 'a' && str[0] <= 'z'){
		str[0] = str[0] - 32;
	}
	for(i=0;i<size;i++){
		if(str[i] == ' '){
			count++;
			str[i+1] = str[i+1] - 32;
		}
	}
	return count;
}
