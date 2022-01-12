#include <stdio.h>

void display(char (*name)[20], char (*covid)[2]){
	int i, j;
	for(i=0;i<10;i++){
			printf("Name: ");
			puts(*(name+i));
			printf("Report: ");
			puts(*(covid+i));
			printf("\n");
	}
}

int main(){
	int choice;
	char name[10][20] = {
							"Hina",
							"Sara",
							"Ali",
							"Zain",
							"Bakhtawar",
							"Hashim",
							"Zeeshan",
							"Jameela",
							"Asfa",
							"Zahid"
	};
	char covid[10][2] = {
							"P",
							"N",
							"P",
							"P",
							"N",
							"P",
							"N",
							"N",
							"N",
							"N"
	};
	
	while(1){
		printf("1. Display\n");
		printf("2. Swap\n");
		printf("3. Bubble Sort\n");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				display(&name[0], &covid[0]);
				break;
//			case 2:
//				swap();
//				break;
//			case 3: 
//				sort();
//				break;
		}
	}
	return 0;
}


