#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int size3, i, size1, size2;
	int size;
	char *pfull, *p;
	char f[70], l[70], id[70];
	printf("Enter first name : ");
	gets(f);
	printf("Enter last name  : ");
	gets(l);

    size1 = strlen(f);
    size2 = strlen(l);
	size3 = size1 + size2;

	pfull = (char*)malloc(size3 * sizeof(char));
	strcpy(pfull, f);
	strcat(pfull, " ");
	strcat(pfull, l);
	printf("Enter your ID: ");
    gets(id);
    p = (char*)malloc((strlen(id) + 1) * sizeof(char));
	
    strcpy(p, id);
    size = strlen(id) + size3;
    p = realloc(p, size);

    strcat(p, " ");
    strcat(p, pfull);
    puts(p);
	return 0;
}
