#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toUpperCase(char [][20]);
void separate(char [][20]);
void join(char [][20]);

int main(){
	char names[8][20] = {
				"sufiyaan",
				"usmani",
				"qasim",
				"hasan",
				"ahsan",
				"ashraf",
				"shahmir",
				"raza"
	};
	int i;
	toUpperCase(names);
	printf("PART 1:\n");
	for(i=0;i<8;i++){
		puts(names[i]);
	}
	printf("\nPART 2:\n");
	separate(names);
	printf("\nPART 3:\n");
	join(names);
	return 0;
}

void toUpperCase(char names[8][20]){
	int i;
	for(i=0;i<8;i++){
		names[i][0] = toupper(names[i][0]);
	}
}

void separate(char names[8][20]){
	int i;
	printf("FIRST NAMES:\n");
	for(i=0;i<8;i++){
		if(i%2 == 0){
			printf("%s  ", names[i]);
		}
	}
	printf("\nLAST NAMES:\n");
	for(i=0;i<8;i++){
		if(i%2 == 1){
			printf("%s  ", names[i]);
		}
	}
}

void join(char names[8][20]){
	int i;
	for(i=1;i<=4;i++){
		printf("%s %s\n", names, names[2*i-1]);
	}
}