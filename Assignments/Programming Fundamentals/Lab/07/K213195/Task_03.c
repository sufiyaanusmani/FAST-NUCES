#include <stdio.h>
#include <conio.h>

int main()
{
	int num;
	char ch, c;

	do
	{
		printf("\nEnter a character: ");
		c = getche();

		if (c >= '0' && c <= '9')
		{
			num = c - 48; // ASCII value of 0 is 48, so ASCII value of any number will be subracted by 48 to get its integer value. 48-48=48, 49-48=1, 50-48=2, and so on
			break;
		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			ch = c;
			break;
		}
	} while (1);

	return 0;
}
