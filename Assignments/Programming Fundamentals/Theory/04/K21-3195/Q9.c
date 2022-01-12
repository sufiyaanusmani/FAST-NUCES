#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

struct BookInfo
{
	int bookNo, price, isIssued;
	char bookName[25], authorName[25];
};

struct BookInfo book[30];
struct BookInfo temp;

int mainMenu(void);
void addBookInfo(void);
void displayBookInfo(void);
void authorBooks(void);
void bookCount(void);
void listTitle(void);
void sortBooks(void);

int i, size, freeIndex;
freeIndex = 0;

int main()
{
	int choice;
	while (1)
	{
		choice = mainMenu();
		switch (choice)
		{
		case 1:
			system("cls");
			addBookInfo();
			break;
		case 2:
			system("cls");
			displayBookInfo();
			break;
		case 3:
			system("cls");
			authorBooks();
			break;

		case 4:
			system("cls");
			listTitle();
			break;
		case 5:
			system("cls");
			bookCount();
			break;
		case 6:
			system("cls");
			sortBooks();
			break;
		case 7:
			system("cls");
			printf("Thankyou!");
			Sleep(1000);
			exit(0);
			break;
		default:
			system("cls");
			printf("\aWrong choice entered, please enter a valid choice\n");
			break;
		}
	}
	return 0;
}

int mainMenu()
{
	int menuChoice;
	system("cls");
	printf("\xb2\xb2\xb2\xb2\xb2 LIBRARY \xb2\xb2\xb2\xb2\xb2\n");
	printf("1. Add Book Information\n");
	printf("2. Display Book Information\n");
	printf("3. List all books of given author\n");
	printf("4. List the title of specified book\n");
	printf("5. List the count of books in the library number\n");
	printf("6. List the books in the order of accession\n");
	printf("7. Exit\n\n");
	printf("Enter your choice: ");
	fflush(stdin);
	scanf("%d", &menuChoice);
	return menuChoice;
}

void addBookInfo()
{
	book[freeIndex].bookNo = freeIndex + 1;
	fflush(stdin);
	printf("Enter book name: ");
	fflush(stdin);
	gets(book[freeIndex].bookName);
	printf("Enter author name: ");
	fflush(stdin);
	gets(book[freeIndex].authorName);
	printf("Enter book price: $ ");
	fflush(stdin);
	scanf("%d", &book[freeIndex].price);
	book[freeIndex].isIssued = 0;
	system("cls");
	freeIndex++;
	printf("New Book added successfully\n");
	Sleep(1000);
}

void displayBookInfo()
{
	printf("Book No  Book Name                  Author Name                Book Price($)  Status\n");
	for(i=1;i<=87;i++){
		printf("-");
	}
	printf("\n");
	for (i = 0; i < freeIndex; i++)
	{
		printf("%-7d  %-25s  %-25s  %-13d  %-10s\n", book[i].bookNo, book[i].bookName, book[i].authorName, book[i].price, (book[i].isIssued == 1 ? "Issued" : "Not Issued"));
	}
	printf("\nPress any key to continue");
	getch();
}

void authorBooks()
{
	char author[25];
	int flag = 0;
	printf("Enter author name: ");
	fflush(stdin);
	gets(author);
	for (i = 0; i < freeIndex; i++)
	{
		if (strcmp(strlwr(book[i].authorName), strlwr(author)) == 0)
		{
			printf("Book No   : %d\n", book[i].bookNo);
			printf("Book Name : %s\n", book[i].bookName);
			printf("Price     : %d\n", book[i].price);
			printf("Status    : %s\n\n", (book[i].isIssued == 1 ? "Issued" : "Not Issued"));
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("\aThis author does not exist\n");
	}
	printf("Press any key to continue");
	getch();
}

void bookCount()
{
	printf("Library currently contains %d books\n", freeIndex);
	printf("\nPress any key to continue");
	getch();
}

void listTitle()
{
	int bookNo, flag = 0;
	printf("Enter Book No: ");
	fflush(stdin);
	scanf("%d", &bookNo);
	for (i = 0; i < freeIndex; i++)
	{
		if (bookNo == book[i].bookNo)
		{
			printf("Book No   : %d\n", book[i].bookNo);
			printf("Book Name : %s\n", book[i].bookName);
			printf("Author    : %s\n", book[i].authorName);
			printf("Price     : %d\n", book[i].price);
			printf("Status    : %s\n\n", (book[i].isIssued == 1 ? "Issued" : "Not Issued"));
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("This book does not exists\n");
	}
	printf("\nPress any key to continue");
	getch();
}

void sortBooks()
{
	int round;
	for (round = 1; round < size; round++)
	{
		for (i = 0; i < freeIndex; i++)
		{
			if (book[i].bookNo > book[i + 1].bookNo)
			{
				temp = book[i];
				book[i] = book[i + 1];
				book[i + 1] = temp;
			}
		}
	}

	printf("The list has been sorted according to Book No, please go to menu and press option 2 to view the books\n");
	printf("Press any key to continue");
	getch();
}