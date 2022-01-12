#include <stdio.h>

void SortFunction(int *, int *, int); // *arr, *size, order

int main()
{
	int size, order, i;
	printf("Enter size of array: ");
	scanf("%d", &size);
	int arr[size];
	for (i = 0; i < size; i++)
	{
		printf("%d. Enter number: ", i + 1);
		scanf("%d", &arr[i]);
	}
	while (1)
	{
		printf("\n1. Ascending\n2. Descending\n\nEnter order: ");
		scanf("%d", &order);
		if (order == 1 || order == 2)
		{
			break;
		}
		else
		{
			printf("Error, please enter a correct choice\n");
		}
	}

	SortFunction(arr, &size, order);

	for (i = 0; i < size; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}

void SortFunction(int *ptrArr, int *ptrSize, int order)
{
	int i, round, temp;
	switch (order)
	{
	case 1:
		for (round = 1; round < *ptrSize; round++)
		{
			for (i = 0; i < *ptrSize - round; i++)
			{
				if (*(ptrArr + i) > *(ptrArr + 1 + i))
				{
					temp = *(ptrArr + i);
					*(ptrArr + i) = *(ptrArr + 1 + i);
					*(ptrArr + 1 + i) = temp;
				}
			}
		}
		break;
	case 2:
		for (round = 1; round < *ptrSize; round++)
		{
			for (i = 0; i < *ptrSize - round; i++)
			{
				if (*(ptrArr + i) < *(ptrArr + 1 + i))
				{
					temp = *(ptrArr + i);
					*(ptrArr + i) = *(ptrArr + 1 + i);
					*(ptrArr + 1 + i) = temp;
				}
			}
		}
		break;
	}
}
