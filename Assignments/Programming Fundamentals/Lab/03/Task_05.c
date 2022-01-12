#include<stdio.h>

main(){
	float distance, time, average;
	
	do{
		printf("\nEnter distance travelled(in miles)(positive values only): ");
		scanf("%f", &distance);
		printf("\nEnter total time taken(positive values only): ");
		scanf("%f", &time);
		
		if(distance < 0 || time < 0){
			printf("\n\a\a\aValues of distance and/or must be positive\n");
		}		
	}while(distance < 0 || time < 0);
	
	average = distance / time;
	
	printf("\n-----------------------------\n");
	printf("Average Speed: %.2f miles/hr", average);
}
