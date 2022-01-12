#include <stdio.h>
#include <string.h>

int main(){
	char sentence[30];
	char *piece;
	gets(sentence);
	piece = strtok(sentence, " ");
	while(piece != NULL){
		if(strcmp(piece, "the") != 0){
			printf("%s ", piece);
		}
		piece = strtok(NULL, " ");
}
	return 0;
}
