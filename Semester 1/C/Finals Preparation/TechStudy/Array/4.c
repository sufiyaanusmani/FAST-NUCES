#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size, i, sum;
    sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    arr = (int *)calloc(size, sizeof(int));
    for(i=0;i<size;i++){
        printf("%d. Enter a number: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<size;i++){
        sum += arr[i];
    }
    printf("Sum: %d", sum);
    free(arr);
    return 0;
}