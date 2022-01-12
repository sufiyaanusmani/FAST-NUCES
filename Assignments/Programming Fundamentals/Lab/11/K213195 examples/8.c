#include<stdio.h>
#include<string.h>
struct Type {
	char TypeName[20];
};
struct Car {
	char CarName[20];
	char make[15];
	char model[15];
	char color[10];
	int seats;
	int engine;
	int price;
	struct Type CarType;
};
int main() {
	struct Car myCar;
	puts("***Example of Nested Structure***");
	puts("Enter the Name of Car: ");
	gets(myCar.CarName);
	puts("Enter type of Car: (Mini) Sedan; Sports; Luxury; SUV: ");
	gets(myCar.CarType.TypeName);
	puts("Enter the color of Car: ");
	gets(myCar.color);
	puts("Enter the maker of Car: ");
	gets(myCar.make);
	puts("Enter the Model of Car: ");
	gets(myCar.model);
	printf("Enter numbers of seats: ");
	scanf("%d", &myCar.seats);
	printf("Enter the price: ");
	scanf("%d", &myCar.price);
	printf("Enter the engine capacity: ");
	scanf("%d", &myCar.engine);
	puts("\n\n**Print***");
	printf("\nCarName: %s",myCar.CarName),
	       printf("\nCarType: %s",myCar.CarType.TypeName);
	printf("\nColor: %s",myCar.color);
	printf("\nMaker: %s",myCar.make),
	       printf("\nModel: %s",myCar.model);
	printf("\nNumbers of Seats: %d",myCar.seats);
	printf("\nCar Price: %d",myCar.price);
	printf("\nCar engine Capacity: %d", myCar.engine);
}