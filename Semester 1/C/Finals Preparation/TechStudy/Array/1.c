#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int i, size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    for(i=0;i<size;i++){
        printf("%d. Enter a number: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i] < 0){
            printf("%d  ", arr[i]);
        }
    }
    free(arr);
    return 0;
}