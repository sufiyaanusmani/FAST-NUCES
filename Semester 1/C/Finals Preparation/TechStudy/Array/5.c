#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size, i, evenSum, oddSum;
    evenSum = oddSum = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    for(i=0;i<size;i++){
        printf("%d. Enter Number: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<size;i++){
        if(i % 2 == 0){
            evenSum += arr[i];
        }else{
            oddSum += arr[i];
        }
    }
    printf("Even: %d\n", evenSum);
    printf("Odd : %d", oddSum);
    free(arr);
    return 0;
}