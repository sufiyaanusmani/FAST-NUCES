#include <stdio.h>

int main(){
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);
	
	printf("\n%d %s", year, (year%4 == 0)?"is a leap year\n":"is not a leap year\n");
	
	return 0;
}
