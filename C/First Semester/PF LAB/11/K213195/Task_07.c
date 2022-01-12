#include <stdio.h>

struct Student{
	int studentID;
	char firstName[20];
	char lastName[20];
	char cellNo[12];
	char email[30];
};

struct Register{
	int courseID;
	char courseName[25];
};

int main(){
	printf("Structures Implemented...");
	return 0;
}
