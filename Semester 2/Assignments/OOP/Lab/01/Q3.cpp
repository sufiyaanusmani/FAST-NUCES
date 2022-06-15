#include <iostream>
using namespace std;
#define SIZE 4

void array_mix(int [], int []);

int main(){
    int i;
    int arr1[SIZE] = {2, 3, 6, 7};
    int arr2[SIZE] = {1, 4, 5, 8};

    array_mix(arr1, arr2);

    return 0;
}

void array_mix(int arr1[SIZE], int arr2[SIZE]){
    int temp, i;
    for(i=0;i<SIZE;i++){
        if(i % 2 == 1){
            temp = arr1[i];
            arr1[i] = arr2[i];
            arr2[i] = temp;
        }
    }

    cout << "Array1: ";
    for(i=0;i<SIZE;i++){
        cout << arr1[i] << "   ";
    }

    cout << "\nArray2: ";
    for(i=0;i<SIZE;i++){
        cout << arr2[i] << "   ";
    }
}