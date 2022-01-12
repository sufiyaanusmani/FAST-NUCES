#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int totalSize, i;
	char firstName[100], lastName[100];
	char *ptr;
	printf("Enter first name : ");
	gets(firstName);
	printf("Enter last name  : ");
	gets(lastName);
	totalSize = strlen(firstName) + strlen(lastName) + 2; // +2 is used as 1 byte will be used for space between first and last name and 1 byte is used to store null character
	ptr = (char *)malloc(totalSize * sizeof(char)); 
	if(ptr == NULL){
		printf("Error, can not allocate memory\n");
		exit(1);
	}
	strcpy(ptr, firstName);
	strcat(ptr, " ");
	strcat(ptr, lastName);
	printf("Full Name: ");
	puts(ptr);
	free(ptr);
	return 0;
}
