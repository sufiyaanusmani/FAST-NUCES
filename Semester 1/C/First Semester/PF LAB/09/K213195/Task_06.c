#include <stdio.h>
#include <string.h>

int main(){
	int lenFirst, lenLast, lenTotal, i;
	lenFirst = lenLast = 0;
	char firstName[50], lastName[50], fullName[100];
	
	printf("First name: ");
	scanf("%s", firstName);
	printf("Second name: ");
	scanf("%s", lastName);
	
	// checking length of firstName
	for(i=0;firstName[i] != '\0';i++){
		lenFirst++;
		fullName[i] = firstName[i];
	}
	
	fullName[lenFirst] = ' ';

	// checking length of lastName
	for(i=0;lastName[i] != '\0';i++){
		lenLast++;
		fullName[lenFirst + 1 + i] = lastName[i];
	}
	
	
	lenTotal = lenFirst + lenLast;
	
	fullName[lenTotal + 1] = '\0';
	printf("\nFull name: %s\n", fullName);
	printf("Character Count: %d", lenTotal);
	return 0;
}
