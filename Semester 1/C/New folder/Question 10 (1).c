#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Question 10:
 

//int sort(int[],float[],char[]);
//int  rollnumber(int[]);
 
int main()
{
	int roll_no[7]={1001,1002,1004,1005,1007,1008,1009};
	float marks[7]={75.5,80,64,78,65,54,60};
    char name[7][10]={"Salman","Zubair","Ahsan","Farah","Hassan","Kamran","Mariyum"};
	int i,choice;
	printf("        SORT SEARCH AND PRINT DATA OF A STUDENT       \n ");
	printf(" 1.)   |  Sort the data according to marks  \n ");
	printf(" 2.)   |  Search the data based on roll number \n ");
	printf(" 3.)   |  Search the data based on name \n");
	printf(" 4.)   |  EXIT   ");
	printf("Enter : ");scanf("%d",&choice);
	do
	{
	switch(choice)
	{
		case 1:
		//sort();
		break;
		case 2:
		rollnumber(roll_no,marks,name);
		break;
		case 3:
	//	name();
		break;	
				
	}
}while(choice!=4);
exit(0);
}

//int sort(int r,float m,char)

int rollnumber(int r,float m,char n[7][10])
{
	int i,l;
	printf("Enter roll no: ");scanf("%d",&l);
	for(i=0;i<7;i++)
	{
		if(l==r[i])
		{
			printf("NAME: %s  || MARKS: %f   || ROLL NO: %d",n[i],m[i],r[i]);
		}
	}
}


