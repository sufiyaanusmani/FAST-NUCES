#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size, i, index, round, isUnique;
    printf("Enter size of array: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    for(i=0;i<size;i++){
        printf("%d. Enter number: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(round=0;round<size;round++){
        isUnique = 1;
        for(i=0;i<size;i++){
                if(i!=round && arr[i]==arr[round]){
                    isUnique = 0;
                    break;
                }
        }
        if(isUnique == 1){
            printf("%d  ", arr[round]);
        }
    }
    free(arr);
    return 0;
}   