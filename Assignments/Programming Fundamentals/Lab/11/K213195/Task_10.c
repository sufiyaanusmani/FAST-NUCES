#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int totalSizeFullName, i, size;
	char firstName[100], lastName[100], id[100];
	char *ptrFullName, *ptr;
	printf("Enter first name : ");
	gets(firstName);
	printf("Enter last name  : ");
	gets(lastName);
	totalSizeFullName = strlen(firstName) + strlen(lastName);
	ptrFullName = (char *)malloc((totalSizeFullName + 2) * sizeof(char)); // +2 is used as 1 byte will be used for space between first and last name and 1 byte is used to store null character
    if(ptrFullName == NULL){
        printf("Error, can not allocate memory\n");
        exit(1);
    }
	strcpy(ptrFullName, firstName);
	strcat(ptrFullName, " ");
	strcat(ptrFullName, lastName);
	printf("Enter your ID: ");
    gets(id);
    ptr = (char *)malloc((strlen(id) + 1) * sizeof(char));
    if(ptr == NULL){
        printf("Error, can not allocate\n");
        exit(1);
    }
    strcpy(ptr, id);
    size = strlen(id) + totalSizeFullName + 2;
    ptr = realloc(ptr, size);
    if(ptr == NULL){
        printf("Error, can not reallocate\n");
        exit(1);
    }
    strcat(ptr, " ");
    strcat(ptr, ptrFullName);
    printf("\n");
    puts(ptr);
    free(ptr);
	free(ptrFullName);
	return 0;
}
