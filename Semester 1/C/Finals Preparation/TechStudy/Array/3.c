#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size, i;
    printf("Enter size of array: ");
    scanf("%d", &size);
    arr = (int *)calloc(size, sizeof(int));
    for(i=0;i<size;i++){
        printf("%d. Enter a number: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<size;i++){
        printf("%d  ", arr[i]);
    }
    free(arr);
    return 0;
}