#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Register{
	int courseID;
	char courseName[15];
};

struct Student{
	int studentID;
	char firstName[15];
	char lastName[15];
	char cellNo[12];
	char email[20];
	struct Register course;
};

struct Student student[5];

int main(){
	int i;
	
	for(i=0;i<5;i++){
		printf("FOR STUDENT %d:\n", i+1);
		printf("Enter student ID (6 digit): ");
		fflush(stdin);
		scanf("%d", &student[i].studentID);
		printf("Enter your first name: ");
		fflush(stdin);
		gets(student[i].firstName);
		printf("Enter your last name: ");
		fflush(stdin);
		gets(student[i].lastName);
		printf("Enter your cell no: ");
		fflush(stdin);
		gets(student[i].cellNo);
		printf("Enter your email: ");
		fflush(stdin);
		gets(student[i].email);
		printf("Enter course ID (6 digit): ");
		fflush(stdin);
		scanf("%d", &student[i].course.courseID);
		printf("Enter course name: ");
		fflush(stdin);
		gets(student[i].course.courseName);
		printf("\n\n");
	}
	system("cls");
	printf("%-10s %-15s %-15s %-11s %-20s %-9s %-11s\n\n", "Student ID", "First Name", "Last Name", "Cell No", "Email", "Course ID", "Course Name");
	for(i=0;i<5;i++){
		printf("%-10d %-15s %-15s %-11s %-20s %-9d %-11s\n", student[i].studentID, student[i].firstName, student[i].lastName, student[i].cellNo, student[i].email, student[i].course.courseID, student[i].course.courseName);
	}
	return 0;
}
