#include <stdio.h>
#include <stdlib.h>

int sum(int *, int);

int main(){
    int arr[10] = {1, 2, 4, 7, 5, 2, 7, 7, 8, 10};
    int size = 10;
    int s;
    s = sum(arr, size);
    printf("%d", s);
    return 0;
}

int sum(int *arr, int size){
    static int s = 0;
    static int i = 0;
    if(i < size){
        s = s + *(arr + i);
        i++;
        sum(arr, size);
    }
    return s;
}