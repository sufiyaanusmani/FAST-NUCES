#include <stdio.h>

char * rev(char []);

int main(){
	char str[100] = "C Programming";
	puts(rev(str));
	return 0;
}

char * rev(char str[]){
	static int i = 0;
	static char reverse[100];
	if(*str != '\0'){
		rev(str + 1);
		reverse[i] = *str;
		i++;
	}
	return reverse;
}
