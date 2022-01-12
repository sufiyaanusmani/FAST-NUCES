#include <stdio.h>
#include <conio.h>

int main(){
	int dd, mm, yyyy;
	char ch;
	
	printf("Enter date in format (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &dd, &mm, &yyyy);
	
	if((dd >= 1 && dd <= 31) && (mm >= 1 && mm <= 12) && (yyyy >= 1000 && yyyy <= 9999)){
		printf("Enter format (a:American, b:British): ");
		ch = getche();
		printf("\n\n");
		switch(ch){
			case 'a':
			case 'A':
				switch(mm){
					case 1:
						printf("January ");
						break;
					case 2:
						printf("February ");
						break;
					case 3: 
						printf("March ");
						break;
					case 4:
						printf("April ");
						break;
					case 5:
						printf("May ");
						break;
					case 6:
						printf("June ");
						break;
					case 7:
						printf("July ");
						break;
					case 8:
						printf("August ");
						break;
					case 9:
						printf("September ");
						break;
					case 10:
						printf("October ");
						break;
					case 11:
						printf("November ");
						break;
					case 12:
						printf("December ");
						break;
				}
				printf("%d, %d\n", dd, yyyy);
			break;
			
			case 'b':
			case 'B':
				printf("%d/%d/%d\n", dd, mm, yyyy);
				break;
			
			default:
				printf("Wrong choice entered\n");
		}
	}else{
		printf("ERROR! Invalid Date Entered\n");
	}
	
	return 0;
}