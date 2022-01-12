#include <stdio.h>
#include <conio.h>

int main(){
	char name[100], ch, temp;
	int i, round, N;
	N = 0;
	printf("Enter your full name: ");
	do{
		ch = getche();
		if(ch == 13){
			break;
		}else if(ch == 32){
			
		}else{
			name[N] = ch;
			N++;
		}
	}while(1);
	
	for(round=1;round<=N-1;round++){
		for(i=0;i<=N-1-round;i++){
			if(name[i] > name[i+1]){
				temp = name[i];
				name[i] = name[i+1];
				name[i+1] = temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<=N-1;i++){
		printf("%c", name[i]);
	}
	return 0;
}