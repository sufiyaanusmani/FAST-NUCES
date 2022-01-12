#include <stdio.h>

int main(){
	int cal, pak, eng, pf, isl;
	
	printf("Enter Calculus Marks (out of 100): ");
	scanf(" %d", &cal);
	printf("Enter Pak-Studies Marks (out of 100): ");
	scanf(" %d", &pak);
	printf("Enter English Communication Marks (out of 100): ");
	scanf(" %d", &eng);
	printf("Enter Programming Fundamentals Marks (out of 100): ");
	scanf(" %d", &pf);
	printf("Enter Islamic Studies Marks (out of 100): ");
	scanf(" %d", &isl);
	
	printf("\n\n");
	
	//Calculus
	if(cal >= 90 && cal <= 100)
	{
		printf("Calculus			:		A+");
	}
	else if(cal >= 87 && cal <= 90)
	{
		printf("Calculus			:		A");
	}
	else if(cal >= 83 && cal <= 86)
	{
		printf("Calculus			:		A-");
	}
	else if(cal >= 79 && cal <= 82)
	{
		printf("Calculus			:		B+");
	}
	else if(cal >= 75 && cal <= 78)
	{
		printf("Calculus			:		B");
	}
	else if(cal >= 71 && cal <= 74)
	{
		printf("Calculus			:		B-");
	}
	else if(cal >= 67 && cal <= 70)
	{
		printf("Calculus			:		C+");
	}
	else if(cal >= 63 && cal <= 66)
	{
		printf("Calculus			:		C");
	}
	else if(cal >= 59 && cal <= 62)
	{
		printf("Calculus			:		C-");
	}
	else if(cal >= 55 && cal <= 58)
	{
		printf("Calculus			:		D+");
	}
	else if(cal >= 50 && cal <= 54)
	{
		printf("Calculus			:		D");
	}
	else if(cal >= 0 && cal <= 49)
	{
		printf("Calculus			:		F");
	}
	
	printf("\n");

	//Pak-Studies
	if(pak >= 90 && pak <= 100)
	{
		printf("Pak-Studies			:		A+");
	}
	else if(pak >= 87 && pak < 90)
	{
		printf("Pak-Studies			:		A");
	}
	else if(pak >= 83 && pak <= 86)
	{
		printf("Pak-Studies			:		A-");
	}
	else if(pak >= 79 && pak <= 82)
	{
		printf("Pak-Studies			:		B+");
	}
	else if(pak >= 75 && pak <= 78)
	{
		printf("Pak-Studies			:		B");
	}
	else if(pak >= 71 && pak <= 74)
	{
		printf("Pak-Studies			:		B-");
	}
	else if(pak >= 67 && pak <= 70)
	{
		printf("Pak-Studies			:		C+");
	}
	else if(pak >= 63 && pak <= 66)
	{
		printf("Pak-Studies			:		C");
	}
	else if(pak >= 59 && pak <= 62)
	{
		printf("Pak-Studies			:		C-");
	}
	else if(pak >= 55 && pak <= 58)
	{
		printf("Pak-Studies			:		D+");
	}
	else if(pak >= 50 && pak <= 54)
	{
		printf("Pak-Studies			:		D");
	}
	else if(pak >= 0 && pak <= 49)
	{
		printf("Pak-Studies			:		F");
	}
	
	printf("\n");

	//English Communication
	if(eng >= 90 && eng <= 100)
	{
		printf("English Communication		:		A+");
	}
	else if(eng >= 87 && eng < 90)
	{
		printf("English Communication		:		A");
	}
	else if(eng >= 83 && eng <= 86)
	{
		printf("English Communication		:		A-");
	}
	else if(eng >= 79 && eng <= 82)
	{
		printf("English Communication		:		B+");
	}
	else if(eng >= 75 && eng <= 78)
	{
		printf("English Communication		:		B");
	}
	else if(eng >= 71 && eng <= 74)
	{
		printf("English Communication		:		B-");
	}
	else if(eng >= 67 && eng <= 70)
	{
		printf("English Communication		:		C+");
	}
	else if(eng >= 63 && eng <= 66)
	{
		printf("English Communication		:		C");
	}
	else if(eng >= 59 && eng <= 62)
	{
		printf("English Communication		:		C-");
	}
	else if(eng >= 55 && eng <= 58)
	{
		printf("English Communication		:		D+");
	}
	else if(eng >= 50 && eng <= 54)
	{
		printf("English Communication		:		D");
	}
	else if(eng >= 0 && eng <= 49)
	{
		printf("English Communication		:		F");
	}

	printf("\n");

	//Programming Fundamentals
	if(pf >= 90 && pf <= 100)
	{
		printf("Programming Fundamentals	:		A+");
	}
	else if(pf >= 87 && pf < 90)
	{
		printf("Programming Fundamentals	:		A");
	}
	else if(pf >= 83 && pf <= 86)
	{
		printf("Programming Fundamentals	:		A-");
	}
	else if(pf >= 79 && pf <= 82)
	{
		printf("Programming Fundamentals	:		B+");
	}
	else if(pf >= 75 && pf <= 78)
	{
		printf("Programming Fundamentals	:		B");
	}
	else if(pf >= 71 && pf <= 74)
	{
		printf("Programming Fundamentals	:		B-");
	}
	else if(pf >= 67 && pf <= 70)
	{
		printf("Programming Fundamentals	:		C+");
	}
	else if(pf >= 63 && pf <= 66)
	{
		printf("Programming Fundamentals	:		C");
	}
	else if(pf >= 59 && pf <= 62)
	{
		printf("Programming Fundamentals	:		C-");
	}
	else if(pf >= 55 && pf <= 58)
	{
		printf("Programming Fundamentals	:		D+");
	}
	else if(pf >= 50 && pf <= 54)
	{
		printf("Programming Fundamentals	:		D");
	}
	else if(pf >= 0 && pf <= 49)
	{
		printf("Programming Fundamentals	:		F");
	}

	printf("\n");

	//Islamic Studies
	if(isl >= 90 && isl <= 100)
	{
		printf("Ethics or Islamic Studies	:		A+");
	}
	else if(isl >= 87 && isl < 90)
	{
		printf("Ethics or Islamic Studies	:		A");
	}
	else if(isl >= 83 && isl <= 86)
	{
		printf("Ethics or Islamic Studies	:		A-");
	}
	else if(isl >= 79 && isl <= 82)
	{
		printf("Ethics or Islamic Studies	:		B+");
	}
	else if(isl >= 75 && isl <= 78)
	{
		printf("Ethics or Islamic Studies	:		B");
	}
	else if(isl >= 71 && isl <= 74)
	{
		printf("Ethics or Islamic Studies	:		B-");
	}
	else if(isl >= 67 && isl <= 70)
	{
		printf("Ethics or Islamic Studies	:		C+");
	}
	else if(isl >= 63 && isl <= 66)
	{
		printf("Ethics or Islamic Studies	:		C");
	}
	else if(isl >= 59 && isl <= 62)
	{
		printf("Ethics or Islamic Studies	:		C-");
	}
	else if(isl >= 55 && isl <= 58)
	{
		printf("Ethics or Islamic Studies	:		D+");
	}
	else if(isl >= 50 && isl <= 54)
	{
		printf("Ethics or Islamic Studies	:		D");
	}
	else if(isl >= 0 && isl <= 49)
	{
		printf("Ethics or Islamic Studies	:		F");
	}

	return 0;
}
