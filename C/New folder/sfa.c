#include <stdio.h>
#include <string.h>

struct ArticleInfo{
		int ID;
		char title[30];
		char journal[30];
		int issue;
		int year;
		int start;
		int end;
		char author[30];
	};

void checkAuthor(struct ArticleInfo [], int);
void display(struct ArticleInfo [], int);
void display1(struct ArticleInfo *, int);

int main(){
	
	struct ArticleInfo article[5] = {
		{1, "Cuckoo Hashing", "JAlg", 51, 2004, 121, 133, "Robert Tarjan"},
		{2, "Deterministic Dictionaries", "Jalg", 41, 2001, 69, 85, "Robert Lafore"},
		{3, "Alchemist", "Searching", 12, 2009, 23, 55, "Paulo Coelho"},
		{4, "C Programming", "Programming", 34, 1972, 4, 54, "Dennis Ritchie"},
		{5, "Windows", "Microsoft", 23, 1990, 2, 44, "Bill Gates"}
	};
	int size = 5;
	
	checkAuthor(article, size);
	display(article, size);
	display1(&article[0], size);
	return 0;
}


void checkAuthor(struct ArticleInfo article[], int size){
	int i, flag = 0;
	for(i=0;i<size;i++){
		if(strcmp(article[i].author, "Robert Tarjan") == 0){
			strcpy(article[i].author, "Robert Lafore");
			flag = 1;
		}
	}
	if(flag == 0){
		printf("Author not found\n");
	}
}

void display(struct ArticleInfo article[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("ID: %d\n", article[i].ID);
		printf("Author: ");
		puts(article[i].author);
	}
}

void display1(struct ArticleInfo *article, int size){
	int i;
	for(i=0;i<size;i++){
		printf("ID: %d\n", (article+i)->ID);
		printf("Author: ");
		puts(((article+i)->author));
	}
}