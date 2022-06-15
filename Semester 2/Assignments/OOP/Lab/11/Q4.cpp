#include <iostream>
using namespace std;

template <class T>
class Array{
    private:
        int size;
        T *arr;
    public:
        Array(T a[], int size){
            this->size = size;
            arr = new T[size];  // allocating new memory
            int i;
            for(i=0;i<size;i++){
                arr[i] = a[i];
            }
        }
        T sum(){
            int i;
            T total = 0;
            for(i=0;i<size;i++){
                total += arr[i];
            }
            return total;
        }
        ~Array(){   // using destructor to de-allocate memory as class contains pointer variable
            delete[] arr;
        }
};

int main(){
    int arr1[5] = {4, 3, 9, 3, 2};
    Array<int> a1(arr1, 5);
    cout << "Sum of integer array: " << a1.sum() << endl;

    double arr2[5] = {4.5, 3.2, 9.9, 2.0};
    Array<double> a2(arr2, 5);
    cout << "Sum of double array: " << a2.sum() << endl;
    return 0;
}