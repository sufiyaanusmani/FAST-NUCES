#include <stdio.h>

int main(){
	int i, hoursWorked, overtimeHours, overtimePay;
	
	for(i=1;i<=10;i++){
		printf("Enter number of hours you have worked: ");
		scanf("%d", &hoursWorked);
		overtimeHours = hoursWorked - 40;
		if(overtimeHours > 0){
			overtimePay = 12 * overtimeHours;
			printf("Your overtime pay: %d", overtimePay);
		}else{
			printf("You haven't worked overtime");
		}
		printf("\n");
	}
	return 0;
}