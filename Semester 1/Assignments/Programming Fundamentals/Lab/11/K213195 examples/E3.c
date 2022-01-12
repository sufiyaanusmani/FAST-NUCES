#include <stdio.h>
#include <string.h>

struct StudentInfo{
	char name[50];
	int roll;
	float marks;
};

struct StudentInfo student;

int main(){
	printf("Enter informations: \n\n");
	printf("Enter name    : ");
	gets(student.name);
	printf("Enter roll no : ");
	scanf("%d", &student.roll);
	printf("Enter marks   : ");
	scanf("%f", &student.marks);
	printf("\n\nDisplaying Information: \n");
	printf("Name     : %s\n", student.name);
	printf("Roll No  : %d\n", student.roll);
	printf("Marks    : %.1f %%\n", student.marks);
	return 0;
}
