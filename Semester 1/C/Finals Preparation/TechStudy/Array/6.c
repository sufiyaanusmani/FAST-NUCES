#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size, i, max, min;
    printf("Enter size of array: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    for(i=0;i<size;i++){
        printf("%d. Enter number: ", i+1);
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(i=0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Maximum: %d\nMinimum: %d", max, min);
    free(arr);
    return 0;
}