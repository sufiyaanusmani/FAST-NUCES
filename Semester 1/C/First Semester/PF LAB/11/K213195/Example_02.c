#include <stdio.h>
#include <string.h>

struct book{
	char title[100];
	int year;
	float price;
};

int main(){
	struct book b;
	strcpy(b.title, "Literature");
	b.year = 2016;
	b.price = 10.85;
	printf("%s %d %.2f\n", b.title, b.year, b.price);
	return 0;
}
