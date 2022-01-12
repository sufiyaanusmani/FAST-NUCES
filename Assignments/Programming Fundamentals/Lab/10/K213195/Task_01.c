#include <stdio.h>
#include <string.h>

int main(){
	char firstName[25], lastName[25], fullName[50];
	
	printf("Enter your first name: ");
	gets(firstName);
	printf("Enter your last name: ");
	gets(lastName);
	
	strcpy(fullName, firstName);
	strcat(fullName, " ");
	strcat(fullName, lastName);
	
	strrev(fullName);
	
	printf("\nFull name backwards: ");
	puts(fullName);
	return 0;
}
