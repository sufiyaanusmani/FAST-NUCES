#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

int main()
{
	int choice, password, n, attempts;
	char ch1 = '0', ch2 = '0', ch3 = '0', ch4 = '0', p1, p2, p3, p4;
	srand(time(0));
	while (1)
	{
		system("cls");
		system("color 0f");
		printf("1. Login\n2. Reset Password\n3. Close\n\nEnter your choice: ");
		fflush(stdin);
		scanf("%d", &choice);
		system("cls");
		switch (choice)
		{
		case 1:
			attempts = 1;
			do
			{
				system("cls");
				printf("Enter password: ");
				fflush(stdin);
				scanf("%c%c%c%c", &p1, &p2, &p3, &p4);
				if (p1 == ch1 && p2 == ch2 && p3 == ch3 && p4 == ch4)
				{
					break;
				}
				else
				{
					system("cls");
					printf("Wrong Password, %d attempts remaining", 3 - attempts);
					Sleep(1000);
				}
				attempts++;
			} while (attempts <= 3);
			system("cls");
			if (attempts <= 3)
			{
				printf("WELCOME");
				getch();
			}
			else
			{
				printf("Account Blocked");
				getch();
			}
			break;
		case 2:
			system("cls");
			do
			{
				n = rand() % 128;
			} while (n <= 64 || n >= 90);
			ch1 = n;
			do
			{
				n = rand() % 128;
			} while (n <= 96 || n >= 123);
			ch2 = n;
			do
			{
				n = rand() % 128;
			} while (n <= 47 || n >= 58);
			ch3 = n;
			do
			{
				n = rand() % 128;
			} while (n <= 32 || n >= 48);
			ch4 = n;
			printf("Password: %c%c%c%c", ch1, ch2, ch3, ch4);
			printf("\n\nPress any key to continue");
			getch();
			break;
		case 3:
			system("cls");
			system("color 0b");
			printf("Thankyou for using atm");
			Sleep(500);
			exit(0);
		default:
			system("cls");
			printf("Wrong choice entered");
			Sleep(1000);
		}
	}
	return 0;
}
