// Sufiyaan Usmani

#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
void sort(T arr[], int size){
	int round, i;
	T temp;
	for(round=1;round<size;round++){
		for(i=0;i<size-round;i++){
			if(arr[i] > arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
}

int main(){
	int i;
	
	int arr1[7] = {7, 5, 4, 3, 9, 8, 6};
	sort(arr1, 7);
	cout << "Array 1 Sorted:  ";
	for(i=0;i<7;i++){
		cout << setw(6) << arr1[i] << "  ";
	}
	
	cout << "\n\nArray 2 Sorted:  ";
	float arr2[5] = {4.3, 2.5, -0.9, 100.2, 3.0};
	sort(arr2, 5);
	for(i=0;i<5;i++){
		cout << setw(6) << arr2[i] << "  ";
	}
	return 0;
}
