#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str[] = "this is Martin the stupid . Full of ugly and pathetic ideas. Alas , he is here today";
	char *newStr;
	char *piece = strtok(str, " ");
	newStr = (char *)malloc((strlen(str) + 1 + 100) * sizeof(char));
	strcpy(newStr, "");
	while(piece != NULL){
		if(strcmp(piece, "stupid") == 0){
			strcat(newStr, "great ");
		}else if(strcmp(piece, "ugly") == 0){
			strcat(newStr, "vibrant ");
		}else if(strcmp(piece, "pathetic") == 0){
			strcat(newStr, "shiny ");
		}else if(strcmp(piece, "Alas") == 0){
			strcat(newStr, "Wow ");
		}else{
			strcat(newStr, piece);
			strcat(newStr, " ");
		}
		piece = strtok(NULL, " ");
	}
	puts(newStr);
	free(newStr);
	return 0;
}
