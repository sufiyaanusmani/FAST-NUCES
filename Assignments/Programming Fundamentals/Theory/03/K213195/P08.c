#include <stdio.h>
#include <conio.h>

int main(){
	int i, j;
	char situation;
	
	printf("Enter situation (n: normal, a: abnormal): ");
	
	while(1){
		situation = getch();
		if(situation == 'n' || situation == 'a'){
			printf("%c", situation);
			break;		
		}
	}
	printf("\n\n");
	
	switch(situation){
		case 'n':
			for(i=1;i<=8;i++){
				printf("#");
			}
			printf("\n");
			for(i=1;i<=5;i++){
				printf("#");
				for(j=1;j<=6;j++){
					printf("NormalSituation");
				}
				printf("#\n");
			}
			for(i=1;i<=8;i++){
				printf("#");
			}
			break;
		case 'a':
			for(i=1;i<=8;i++){
				printf("*");
			}
			printf("\n");
			for(i=1;i<=5;i++){
				printf("*");
				for(j=1;j<=6;j++){
					printf("AbnormalSituation");
				}
				printf("*\n");
			}
			for(i=1;i<=8;i++){
				printf("*");
			}
			break;
	}
	return 0;
}