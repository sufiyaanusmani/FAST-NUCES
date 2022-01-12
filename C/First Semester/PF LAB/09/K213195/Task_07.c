#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int sales[6][4], productSale[6], employeeSale[4];
	int i, j, total;
	srand(time(0));
	
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			sales[i][j] = (rand() % 51);	// this will store random values in array
		}
	}
	
	printf("         |    Emp 1   Emp 2   Emp 3   Emp 4  |\n----------------------------------------------\n");
	// displaying information
	for(i=0;i<6;i++){
		printf("Product %d|", i+1);
		for(j=0;j<4;j++){
			printf("\t%3d  ", sales[i][j]);
		}
		printf("|\n");
	}
	printf("----------------------------------------------\n");
	
	// initializing productSale and employeeSale array
	
	for(i=0;i<6;i++){
		productSale[i] = 0;
	}
	for(i=0;i<4;i++){
		employeeSale[i] = 0;
	}
	
	// storing data in productSale and employeeSale array
	
	for(i=0;i<6;i++){
		for(j=0;j<4;j++){
			productSale[i] += sales[i][j];
			total += sales[i][j];
		}
	}
	for(j=0;j<4;j++){
		for(i=0;i<6;i++){
			employeeSale[j] += sales[i][j];
		}
	}
	
	printf("\n***** Total Sales of Products *****\n");
	for(i=0;i<6;i++){
		printf("Product %d: %d\n", i+1, productSale[i]);
	}
	printf("Total    : %d\n", total);
	
	printf("\n***** Total Sales by each employee *****\n");
	for(i=0;i<4;i++){
		printf("Employee %d: %d\n", i+1, employeeSale[i]);
	}
	return 0;
}
