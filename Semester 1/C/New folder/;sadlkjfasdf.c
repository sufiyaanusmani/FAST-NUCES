#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct DOB{
	int dd;
	int mm;
	int yy;
};

struct StudentInfo{
	int id;
	char name[15];
	struct DOB date;
	float marks;
};

void input(struct StudentInfo *);
void output(struct StudentInfo *);

int main(){
	struct StudentInfo student;
	input(&student);
	output(&student);
	return 0;
}

void input(struct StudentInfo *ptr){
	printf("Enter your ID: ");
	scanf("%d", &ptr->id);
	printf("Enter your name: ");
	fflush(stdin);
	gets(ptr->name);
	printf("Enter DOB(dd/mm/yy): ");
	scanf("%d/%d/%d", &ptr->date.dd, &ptr->date.mm, &ptr->date.yy);
	printf("Enter your marks: ");
	scanf("%f", &ptr->marks);
}

void output(struct StudentInfo *ptr){
	printf("ID: %d\n", ptr->id);
	printf("Name: ");
	puts(ptr->name);
	printf("DOB: %d/%d/%d\n", ptr->date.dd, ptr->date.mm, ptr->date.yy);
	printf("Marks: %.2f", ptr->marks);
}
