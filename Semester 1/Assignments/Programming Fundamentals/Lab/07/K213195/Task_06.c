#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
	int attempts, p1Score, p2Score;
	int num1, num2, num3, ch;
	p1Score = p2Score = 0;

	do
	{
		system("cls");
		// Player 1
		printf("Player 1 turn\n");
		attempts = 1;
		while (attempts <= 3)
		{
			a:
			printf("Enter first number: ");
			fflush(stdin);
			scanf("%d", &num1);
			if (num1 >= 'a' && num1 <= 'z')
			{
				p1Score = p1Score + num1;
				attempts++;
			}
			else if (num1 >= 'A' && num1 <= 'Z')
			{
				p1Score = p1Score + (2 * num1);
				attempts++;
			}else{
				system("cls");
				printf("Re-enter again");
				Sleep(1500);
				goto a;
			}
			b:
			printf("\nEnter second number: ");
			fflush(stdin);
			scanf("%d", &num2);
			if (num2 >= 'a' && num2 <= 'z')
			{
				p1Score = p1Score + num2;
				attempts++;
			}
			else if (num2 >= 'A' && num2 <= 'Z')
			{
				p1Score = p1Score + (2 * num2);
				attempts++;
			}
			else if (num2 == num1)
			{
				p1Score = p1Score / 2;
				attempts++;
			}else{
				system("cls");
				printf("Re-enter again");
				Sleep(1500);
				goto b;
			}

			c:
			printf("\nEnter third number: ");
			fflush(stdin);
			scanf("%d", &num3);
			if (num3 >= 'a' && num3 <= 'z')
			{
				p1Score = p1Score + num3;
				attempts++;
			}
			else if (num3 >= 'A' && num3 <= 'Z')
			{
				p1Score = p1Score + (2 * num3);
				attempts++;
			}
			else if (num3 == num2)
			{
				p1Score = p1Score / 2;
				attempts++;
			}else{
				system("cls");
				printf("Re-enter again");
				Sleep(1500);
				goto c;
			}
		}

		system("cls");
		printf("Player 2 turn\n");
		// Player 2
		attempts = 1;
		while (attempts <= 3)
		{
			d:
			printf("\nEnter first number: ");
			fflush(stdin);
			scanf("%d", &num1);
			if (num1 >= 'a' && num1 <= 'z')
			{
				p2Score = p2Score + num1;
				attempts++;
			}
			else if (num1 >= 'A' && num1 <= 'Z')
			{
				p2Score = p2Score + (2 * num1);
				attempts++;
			}else{
				system("cls");
				printf("Re-enter again");
				Sleep(1500);
				goto d;
			}
			e:
			printf("\nEnter second number: ");
			fflush(stdin);
			scanf("%d", &num2);
			if (num2 >= 'a' && num2 <= 'z')
			{
				p2Score = p2Score + num2;
				attempts++;
			}
			else if (num2 >= 'A' && num2 <= 'Z')
			{
				p2Score = p2Score + (2 * num2);
				attempts++;
			}
			else if (num2 == num1)
			{
				p2Score = p2Score / 2;
				attempts++;
			}else{
				system("cls");
				printf("Re-enter again");
				Sleep(1500);
				goto e;
			}

			f:
			printf("\nEnter third number: ");
			fflush(stdin);
			scanf("%d", &num3);
			if (num3 >= 'a' && num3 <= 'z')
			{
				p2Score = p2Score + num3;
				attempts++;
			}
			else if (num3 >= 'A' && num3 <= 'Z')
			{
				p2Score = p2Score + (2 * num3);
				attempts++;
			}
			else if (num3 == num2)
			{
				p2Score = p2Score / 2;
				attempts++;
			}else{
				system("cls");
				printf("Re-enter again");
				Sleep(1500);
				goto f;
			}
		}

		system("cls");
		if (p1Score > p2Score)
		{
			printf("Player 1 wins\n");
		}
		else if (p2Score > p1Score)
		{
			printf("Player 2 wins\n");
		}
		else
		{
			printf("Tie\n");
		}

		printf("Do you want to continue game? [y/n]");
		ch = getch();

	}while(ch == 'y' || ch == 'Y');
	return 0;
}
