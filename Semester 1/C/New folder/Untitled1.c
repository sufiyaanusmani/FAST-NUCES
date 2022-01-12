#include <stdio.h>

int main(){
    int total, qtyB, qtyC, qty, number;
    qtyB = 0;
    qtyC = 0;
    total = 0;
    char choice;

    printf("\t\t\t\t\t\tPIE IN THE SKY BAKERS");
    printf("\n\t\t\t\t\t\t\tWELCOME");
    printf("\nPLEASE SELECT FROM THE FOLLOWING MENU\nC = CAKE\nB = BISCUITS");
    printf("\nHOW MANY TYPES OF BAKERY ITEMS YOU NEED TO ORDER = ");
    scanf(" %d", &number);
    
    switch(number){
    	case 1:
    		printf("\nEnter item you need to order = ");
    		scanf(" %c", &choice);
    		printf("\nEnter quantity: ");
    		scanf(" %d", &qty);
    		
    		if(choice == 'B'){
    			qtyB += qty;
			}else if(choice == 'C'){
    			qtyC += qty;
			}
			break;
		case 2:
			printf("\nEnter first item you need to order = ");
			scanf(" %c", &choice);
			printf("\nEnter quantity: ");
			scanf(" %d", &qty);
			if(choice == 'B'){
				qtyB += qty;
			}else if(choice == 'C'){
				qtyC += qty;
			}else{
				printf("\nWrong item entered");
			}
			printf("\nEnter second item you need to order = ");
			scanf(" %c", &choice);
			printf("\nEnter quantity: ");
			scanf(" %d", &qty);
			if(choice == 'B'){
				qtyB += qty;
			}else if(choice == 'C'){
				qtyC += qty;
			}else{
				printf("\nWrong item entered");
			}
			break;
			default:
				printf("\nERROR\n");
}

	total = (qtyB * 200) + (qtyC * 500);
	printf("\n-----------------------------------\n");
	printf("You have ordered\n");
	printf("%d Cakes    = %d\n", qtyC, qtyC*500);
	printf("%d Biscuits = %d\n", qtyB, qtyB*200);
	printf("     TOTAL = %d\n", total);
	printf("\t\t\t\tThankyou have a nice day\n");
    return 0;
}
