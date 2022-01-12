/* Pointers */
#include <stdio.h>

int main()
{
    int a;
    int *aptr;
    a = 7;
    aptr = &a;

    printf("The address of a is %p \nThe value of aptr is %p", &a, aptr);
    printf("\nThe value of a is %d \nThe value of aptr is %d", a, *aptr); 
    printf("\n\n_Showing that * and & are complements of each others \n&*aPtr = %p \n *aPtr = %p\n", &*aptr, *&aptr);
    return 0;
}