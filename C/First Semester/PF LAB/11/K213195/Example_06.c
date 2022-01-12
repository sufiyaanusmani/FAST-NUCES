#include <stdio.h>
#include <string.h>

struct DateInfo{
	int day;
	int month;
	int year;
};

struct ProductInfo{
	char name[50];
	double price;
	struct DateInfo s_date;
	struct DateInfo e_date;
};

struct ProductInfo product;

int main(){
	strcpy(product.name, "Product");
	product.s_date.day = 1;
	product.s_date.month = 9;
	product.s_date.year = 2012;
	product.e_date.day = 1;
	product.e_date.month = 9;
	product.e_date.year = 2015;
	product.price = 7.5;
	printf("The product's life is %d years\n", product.e_date.year - product.s_date.year);
	return 0;
}
