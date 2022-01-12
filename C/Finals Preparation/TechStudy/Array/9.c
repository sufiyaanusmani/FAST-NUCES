#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size, i, temp, round;
    printf("Enter size of array: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    printf("Enter numbers: ");
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    for(round=1;round<size;round++){
        for(i=0;i<size-round;i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d  ", arr[i]);
    }
    return 0;
}