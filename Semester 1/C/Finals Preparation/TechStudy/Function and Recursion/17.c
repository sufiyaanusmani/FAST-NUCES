#include <stdio.h>
#include <stdlib.h>

void printarr(int *, int);

int main(){
    int arr[10] = {1, 2, 4, 7, 5, 2, 7, 7, 8, 10};
    int size = 10;
    printarr(arr, size);
    return 0;
}

void printarr(int *arr, int size){
    static int i = 0;
    if(i < size){
        printf("%d ", *(arr+i));
        i++;
        printarr(arr, size);
    }
}

