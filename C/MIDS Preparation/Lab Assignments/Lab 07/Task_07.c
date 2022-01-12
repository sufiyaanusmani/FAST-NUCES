#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int choice;
	char ch1, ch2, ch3, ch4, chPass1, chPass2, chPass3, chPass4;
	chPass1 = chPass2 = chPass3 = chPass4 = '0';
	srand(time(0));
	
	while(1){
		system("cls");
		printf("1. Login\n2. Reset Password\n3. Exit\n\nEnter your choice: ");
		fflush(stdin);
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				system("cls");
				printf("Enter password: ");
				fflush(stdin);
				scanf("%c%c%c%c", &ch1, &ch2, &ch3, &ch4);
				if(ch1 == chPass1 && ch2 == chPass2 && ch3 == chPass3 && ch4 == chPass4){
					system("cls");
					printf("Welcome!\n");
					getch();
				}else{
					system("cls");
					printf("Wrong password entered\n");
					Sleep(1000);
				}
				break;
			case 2:
				system("cls");
				do{
					chPass1 = (rand() % 128) + 1;
				}while(chPass1 < 'a' || chPass1 > 'z');
					do{
					chPass2 = (rand() % 128) + 1;
				}while(chPass2 < 'A' || chPass2 > 'Z');
					do{
					chPass3 = (rand() % 128) + 1;
				}while(chPass3 < '0' || chPass3 > '9');
					do{
					chPass4 = (rand() % 128) + 1;
				}while(chPass4 < 'a' || chPass4 > 'z');
				printf("Your new password: %c%c%c%c", chPass1, chPass2, chPass3, chPass4);
				getch();
				break;
			case 3:
				system("cls");
				printf("Good Bye!");
				Sleep(500);
				exit(0);
				break;
			default:
				system("cls");
				printf("Wrong input");
				Sleep(200);
				break;
		}
	}
	return 0;
}
