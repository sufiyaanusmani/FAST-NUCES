#include <stdio.h>
#include <conio.h>

int main(){
	char name[7], ch;
	int i, isSame = 1;
	printf("Enter your name: ");
	for(i=0;i<=6;i++){
		ch = getche();
		name[i] = ch;
	}
	
	for(i=0;i<=2;i++){
		if(name[i] != name[6-i]){
			isSame = 0;
		}
	}
	
	if(isSame == 1){
		printf("\n\nSYMMETRIC\n");
	}else{
		printf("\n\nNOT SYMMETRIC\n");
	}
	
	return 0;
}