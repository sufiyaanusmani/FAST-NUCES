#include <stdio.h>
#include <string.h>

struct StudentInfo{
	int id;
	char name[20];
	char section;
	char email[20];
	float marks;
};

void input(struct StudentInfo *student){
	int i;
	printf("Taking Input\n");
	for(i=0;i<3;i++){
	scanf("%d", &(student+i)->id);
	fflush(stdin);
	gets((student+i)->name);
	fflush(stdin);
	scanf("%c", &(student+i)->section);
	fflush(stdin);
	gets((student+i)->email);
	fflush(stdin);
	scanf("%f", &(student+i)->marks);
	}
}

void output(struct StudentInfo *student){
	int i;
	printf("Output\n");
	for(i=0;i<3;i++){
	printf("%d\n", ((student+i)->id));
	puts((student+i)->name);
	printf("%c\n", ((student+i)->section));
	puts((student+i)->email);
	printf("%f\n", ((student+i)->marks));
	}
}

int main(){
	struct StudentInfo student[3];
	input(student);
	output(student);
	return 0;
}
