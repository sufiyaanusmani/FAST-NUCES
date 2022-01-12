#include <stdio.h>

int main(){
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);
	
	printf("%s year", (year%4==0?"Leap":"Not a leap"));
	
	
	return 0;
}