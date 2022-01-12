#include <stdio.h>

int main(){
	int i, j, totalMarks, percentage;
	int studentInfo[5][9] = {0, 0}; // declaration and initialization
		
	for(i=0;i<5;i++){
		studentInfo[i][6] = 500;
	}	
		
	for(i=0;i<5;i++){
		printf("Enter student id: ");
		scanf("%d", &studentInfo[i][0]);
		for(j=1;j<=5;j++){
			printf("Enter Course %d marks: ", j);
			scanf("%d", &studentInfo[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<5;i++){
		totalMarks = 0;
		for(j=1;j<=5;j++){
			totalMarks += studentInfo[i][j]; 
		}
		percentage = totalMarks / 5;
		studentInfo[i][7] = totalMarks;
		studentInfo[i][8] = percentage;
	}
	
	printf("\n");
	printf("%-10s %-10s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n\n", "Std ID", "C1 Marks", "C2 Marks", "C3 Marks", "C4 Marks", "C5 Marks", "Tot Marks", "Obt Marks", "Percentage");
	for(i=0;i<5;i++){
		for(j=0;j<9;j++){
			printf("%-10d ", studentInfo[i][j]);
		}
		printf("\n");
	}
	return 0;
}
