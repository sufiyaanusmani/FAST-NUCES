#include <stdio.h>

char * reverseOfString(char str[]){
	static int i = 0;
	static char reverse[100];
	if(*str != '\0'){
		reverseOfString(str + 1);
		reverse[i] = *str;
		i++;
	}
	return reverse;
}

int main(){
	char str[100] = "ahsan";
	puts(reverseOfString(str));
	
	return 0;
}
