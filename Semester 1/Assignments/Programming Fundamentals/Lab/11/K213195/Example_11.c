// Dynamic MemoryExample

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    // if memory can not be allocated
    if (ptr == NULL)
    {
        printf("Error! Memory not alloacted");
        exit(0);
    }
    printf("Enter elements: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
        printf("Sum = %d", sum);

        // dealLoacting the memory
        free(ptr);

        return 0;
}