#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//Question 10:
struct student 
{
	int roll_no;
	float marks;
	char name[10];
}s[7]={{1001,75.5,"salman"},{1002,80.0,"zubair"},{1004,64,"ahsan"},{1005,78,"farah"},{1007,65,"hassan"},{1008,54,"kamran"},{1009,60,"mariyum"},};

void sort()
{
	struct student s1[1];
	int i,j,k;
	for (i=0;i<7;i++)
	{
		for (j=0;j<7;j++)
		{
			if (s[i].marks>s[j].marks)
			{
				s1[0]=s[j];
				s[j]=s[i];
				s[i]=s1[0];
			}
		}
	}
}
void display()
{
	int i,j,k;
	printf("     NAME    ||   ROLL NUMBER   ||   MARKS  \n");
	for (i=0;i<7;i++)
	{
		printf("    %s         ",s[i].name);
		printf("    %d         ",s[i].roll_no);
		printf("    %f         ",s[i].marks);
		printf("\n");
	}
}
void roll(int r)
{
	int i=0,j,k=0;
	for (i=0;i<7;i++)
	{
		if (s[i].roll_no==r)
		{
			printf("NAME: %s\n",s[i].name);
			printf("ROLL NUMBER: %d\n",s[i].roll_no);
			printf("MARKS: %.2f",s[i].marks);
			printf("\n\n");
			return;
		}
	} 
	printf("Not found\n");
}
void name(char *p)
{
	int i,j,k;
	for (i=0;i<7;i++)
	{
		if (strcmp(s[i].name,p)==0)
		{
			printf("NAME: %s\n",s[i].name);
			printf("ROLL NUMBER: %d\n",s[i].roll_no);
			printf("MARKS: %.2f\n",s[i].marks);
			printf("\n");
			return;
		}
	}
	printf("Not found\n");
}
 
int main()
{
	char std[20];
	int i,j,choice,r;
do{ 
printf("           SORT PRINT SEARCH DATA OF STUDENTS          \n");
	printf(" 1.)  || Display data according to the marks obtained by each data\n");
	printf(" 2.)  || Search  data based on a roll number\n");
	printf(" 3.)  || Search  data based on a name\n");
	printf(" 4.)  || EXIT \n");
	printf("ENTER: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			sort();
			display();
	     	printf("\n");
			break;
		case 2:
			printf("Enter Roll Number:");
			scanf("%d",&r);
			roll(r);
			printf("\n");
		    break;
		case  3:
			printf("Enter Name\n");
			getchar();
			gets(std);
			strlwr(std);
			name(std);
			printf("\n");
		    break;
		case 4:
		return 0;
		default :
		printf("Invalid input try again\n");	
	}
}while(choice!=4);
}




