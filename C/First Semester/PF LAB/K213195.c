#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	char str[100], ch;
	int count, i;
	count = 0;

	printf("Enter a string: ");
	gets(str);
	printf("\nEnter a word to search: ");
	ch = getche();

	for(i=0; str[i] != '\0'; i++) {
		if(ch == str[i]) {
			count++;
		}
	}

	if(count > 0) {
		printf("\nFrequency of '%c' in \"%s\" : %d", ch, str, count);
	} else {
		printf("\n%c does not exists in the string\n", ch );
	}
	return 0;
}
