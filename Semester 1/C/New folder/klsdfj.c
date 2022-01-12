#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *str, ch;
	int count, size;
	count = 0;
	size = 10;
	str = (char *)malloc(10 * sizeof(char));
	while(1){
		ch = getch();
		
		if(ch == 27){
			break;
		}else{
			printf("%c", ch);
			if(count < size){
				*(str + count) = ch;
				count++;
			}else{
				size+=10;
				str = realloc(str, size * sizeof(char));
				*(str + count) = ch;
				count++;
			}
		}
	}
	*(str + count) = '\0';
	printf("\n");
	puts(str);
	free(str);
	return 0;
}
