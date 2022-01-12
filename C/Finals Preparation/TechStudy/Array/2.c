#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size, i, count;
    count = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    for(i=0;i<size;i++){
        printf("%d. Enter number: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i] < 0){
            count++;
        }
    }
    printf("Negative numbers: %d", count);
    free(arr);
    return 0;
}