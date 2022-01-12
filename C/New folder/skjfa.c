#include <stdio.h>

void display(float (*report)[6], char (*month)[10], char (*department)[10]){
	int i, j;
	printf("           ");
	for(i=0;i<6;i++){
		printf("%-8s  ", *(month+i));
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		printf("%-10s ", *(department+i));
		for(j=0;j<6;j++){
			printf("%-8.2f  ", *(*(report+i) + j));
		}
		printf("\n");
	}
}

int main(){
	float report[6][6] = {
			{27000.50, 34000.50, 45000.50, 50000.50, 50000.00, 240002.00},
			{29000.50, 27000.55, 36000.00, 36000.50, 37000.50, 201002.60},
			{27000.50, 36000.00, 27000.00, 36000.50, 22000.50, 170002.00},
			{36000.50, 36000.50, 39000.50, 27000.00, 22000.00, 182002.00},
			{27000.50, 36000.55, 36000.00, 22000.00, 27000.00, 170001.10},
			{1460002.5, 169002.1, 183001.0, 171001.5, 158001.0}
	};
	char month[6][10] = {
							"January",
							"February",
							"March",
							"April",
							"May",
							"Total"
	};
	char department[5][10] = {
							"Surgery",
							"Emergency",
							"Skin",
							"Covid-19",
							"Dentistry"
	};
	display(&report[0], &month[0], &department[0]);
	return 0;
}


