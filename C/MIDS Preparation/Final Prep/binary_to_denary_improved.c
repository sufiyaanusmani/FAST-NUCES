#include <stdio.h>
#include <conio.h>

int main(){
	int i;
	int binary;
	char ch;
	binary = 0;
	
	for(i=1;i<=8;){
		ch = getch();
		if(ch == '1' || ch == '0'){
			binary = (binary * 10) + (ch - 48);
			i++;
			printf("%c", ch);
		}
	}
	
	printf("\n%d", binary);
	return 0;
}
