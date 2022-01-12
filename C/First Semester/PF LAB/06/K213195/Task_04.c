#include <stdio.h>

int main(){
	int dd, mm, yy;
	char display;
	
	printf("Enter date in format (dd/mm/yy) : ");
	scanf("%d/%d/%d", &dd, &mm, &yy);
	
	if((dd >= 1 && dd <= 31) && (mm >= 1 && mm <= 12) && (yy >= 1000 & yy <= 9999)){
		printf("Enter format\na. British Format\nb. American Format\n\nYour choice: ");
		scanf(" %c", &display);
		switch(display){
			case 'a':
			case 'A':
				printf("%d/%d/%d", dd, mm, yy);   //British Format
				break;
			case 'b':
			case 'B':
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
				printf("%d, %d\n", dd, yy);       //American Format
				break;
			default:
				printf("Invalid option entered");
				break;
		}
	}else{
		printf("\nInvalid Date\n");
	}
	
	return 0;
}