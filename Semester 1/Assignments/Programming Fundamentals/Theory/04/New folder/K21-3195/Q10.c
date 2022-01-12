#include <stdio.h>
#include <string.h>

void sort(int rollNo[7], char name[7][8], float marks[7]);
int searchRollNo(int rollNo[7]);
int searchName(char name[7][8]);
int i;

int main(){
	int choice, index;
	int roll_no[7] = {1001, 1002, 1004, 1005, 1007, 1008, 1009};
	char std_names[7][8] = {"Salman", "Zubair", "Ahsan", "Farah", "Hassan", "Kamran", "Mariyum"};
	float std_marks[7] = {75.5, 80.0, 64.0, 78.0, 65.0, 54.0, 60.0};
	
	printf("1. Sort\n2. Search by roll no\n3. Search by name\n\nEnter your choice: ");
	scanf("%d", &choice);	
	
		switch(choice){
			case 1: 
				sort(roll_no, std_names, std_marks);
				break;
			case 2: 
				index = searchRollNo(roll_no);
				if(index != -1){
					printf("\nName: %s\nRoll no: %d\nMarks: %.1f\n", std_names[index], roll_no[index], std_marks[index]);
				}else{
					printf("Roll no not found\n\a");
				}
				break;
			case 3:
				index = searchName(std_names);
				if(index != -1){
					printf("\nName: %s\nRoll no: %d\nMarks: %.1f\n", std_names[index], roll_no[index], std_marks[index]);
				}else{
					printf("Name not found\n\a");
				}
				break;
			default:
				printf("Wrong choice entered");
				break;				
		}
	return 0;
}

void sort(int rollNo[7], char name[7][8], float marks[7]){
	int round, tempRollNo;
	float tempMarks;
	char nameTemp[8];
	for(round=0;round<=6;round++){
		for(i=0;i<=6-round;i++){
			if(marks[i] < marks[i+1]){
				tempMarks = marks[i];
				marks[i] = marks[i+1];
				marks[i+1] = tempMarks;
				
				tempRollNo = rollNo[i];
				rollNo[i] = rollNo[i+1];
				rollNo[i+1] = tempRollNo;
				
				strcpy(nameTemp, name[i]);
				strcpy(name[i], name[i+1]);
				strcpy(name[i+1], nameTemp);
			}
		}
	}
	for(i=0;i<=6;i++){
		printf("%4d  %-7s  %4.1f\n", rollNo[i], name[i], marks[i]);
	}
}

int searchRollNo(int rollNo[7]){
	int rollNoToSearch, foundIndex = -1;
	printf("Enter roll no: ");
	scanf("%d", &rollNoToSearch);
	for(i=0;i<=6;i++){
		if(rollNoToSearch == rollNo[i]){
			foundIndex = i;
			break;
		}else{
			foundIndex = -1;
		}
	}
	return foundIndex;
}

int searchName(char name[7][8]){
	int foundIndex = -1;
	char nameToSearch[8];
	printf("Enter name : ");
	fflush(stdin);
	gets(nameToSearch);
	for(i=0;i<=6;i++){
		if(strcmp(strupr(nameToSearch), strupr(name[i])) == 0){
			foundIndex = i;
			break;
		}else{
			foundIndex = -1;
		}
	}
	return foundIndex;
}