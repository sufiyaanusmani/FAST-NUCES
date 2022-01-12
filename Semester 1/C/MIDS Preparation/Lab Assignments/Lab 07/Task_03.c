#include <stdio.h>
#include <conio.h>

int main(){
	char ch, chStore;
	int intStore;
	
	do{
		printf("Enter a character: ");
		ch = getche();
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
			chStore = ch;
			break;
		}else if(ch >= '0' && ch <= '9'){
			intStore = ch - 48;
			break;
		}
		printf("\n");
	}while(1);
	return 0;
}
