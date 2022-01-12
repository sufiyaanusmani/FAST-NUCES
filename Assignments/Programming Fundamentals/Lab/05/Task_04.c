#include <stdio.h>

int main(){
	int date, month, year;
	
	printf("Date(dd) = ");
	scanf(" %d", &date);
	printf("Month(mm) = ");
	scanf(" %d", &month);
	printf("Year(yyyy) = ");
	scanf(" %d", &year);
	printf("\n");
	
	if((date>=1 && date <=31) && (month>=1 && month<=12) && (year>999 && year<=9999))
	{
		switch(month)
		{
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
		printf("%d, %d\n", date, year);
	}
	else
	{
		printf("\nInvalid Date\n");
	}
	
	return 0;
}
