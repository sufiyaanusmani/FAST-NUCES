#include <stdio.h>
#include <string.h>

struct BookInfo{
	char title[100];
	int year;
	float price;
};

struct BookInfo book;

int main(){
	char *ptr1;
	int *ptr2, *ptr3;
	strcpy(book.title, "Literature");
	book.year = 2016;
	book.price = 10.8;
	ptr1 = book.title;
	ptr2 = &book.year;
	ptr3 = &book.price;
	
	printf("%s %d %.2f\n", ptr1, *ptr2, *ptr3);
}