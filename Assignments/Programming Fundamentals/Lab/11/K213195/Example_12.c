// Dynamic MemoryExample

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2, i, *ptr;

    printf("Enter the size: ");
    scanf("%d", &n1);

    ptr = (int *)malloc(n1 * sizeof(int));

    printf("Address of previously alloacted memory\n");
    for (i = 0; i < n1; ++i)
        printf("%pc\n", ptr + i);

    printf("Enter the new size: ");
    scanf("%d", &n2); // realLoacting the memory

    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Address of newly alloacted memory:\n");
    for (i = 0; i < n2; ++i)
        printf("%pc\n", ptr + i);

    free(ptr);
    return 0;
}