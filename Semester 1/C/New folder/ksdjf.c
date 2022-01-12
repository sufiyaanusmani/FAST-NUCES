#include <stdio.h>
#include <conio.h>

int main(){
	char str[100], newStr[100], ch;
	int i, j;
	gets(str);
	ch = getche();
	j = 0;
	printf("\n");
	for(i=0;str[i]!='\0';i++){
		if(str[i] != ch){
			newStr[j] = str[i];
			j++;
		}
	}
	puts(newStr);
	return 0;
}
