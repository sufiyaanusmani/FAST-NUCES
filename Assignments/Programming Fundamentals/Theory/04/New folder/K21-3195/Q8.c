#include <stdio.h>

struct dateInfo{
	int date, month, year;
};

int main(){
	struct dateInfo d1, d2;
	
	printf("Enter first date in format (dd/mm/yyyy)  : ");
	scanf("%d/%d/%d", &d1.date, &d1.month, &d1.year);
	printf("Enter second date in format (dd/mm/yyyy) : ");
	scanf("%d/%d/%d", &d2.date, &d2.month, &d2.year);
	
	printf("\n");
	if((d1.date == d2.date) && (d1.month == d2.month) && (d1.year == d2.year)){
		printf("EQUAL");
	}else{
		printf("UNEQUAL");
	}
	return 0;
}
