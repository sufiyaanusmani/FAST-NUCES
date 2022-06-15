#include <iostream>
#include <string.h>
using namespace std;

template <class T, int size>
class Array{
    private:
        T arr[size];
    public:
        Array(T a[]){
            int i;
            for(i=0;i<size;i++){
                arr[i] = a[i];
            }
        }
        void sum(){
            T sum = 0;
            int i;
            for(i=0;i<size;i++){
                sum += arr[i];
            }
            cout << "Sum: " << sum;
        }
        void palindrome(){
            bool isPalindrome = true;
            int i;
            for(i=0;i<size/2;i++){
                if(arr[i] != arr[size-i]){
                    isPalindrome = false;
                    break;
                }
            }
            if(isPalindrome == true){
                cout << "\nPalindrome" << endl;
            }else{
                cout << "\nNot palindrome" << endl;
            }
        }
};

template <int size>
class Array<char, size>{
    private:
        char arr[size];
    public:
        Array(char a[]){
            int i;
            strcpy(arr, a);
        }
        void sum(){
            string temp = "";
            int i;
            for(i=0;i<size;i++){    
                temp += arr[i];
            }
            cout << temp;   
        }
        void palindrome(){
            bool isPalindrome = true;
            int i;
            for(i=0;i<size/2;i++){
                if(arr[i] != arr[size-1-i]){
                    isPalindrome = false;
                    break;
                }
            }
            if(isPalindrome == true){
                cout << "\nPalindrome" << endl;
            }else{
                cout << "\nNot palindrome" << endl;
            }
        }
};

int main(){
    double arr1[4] = {0.178, 0.24, 0.35, 0.46};  
    Array<double, 4> a1(arr1);
    a1.sum();
    a1.palindrome();

    cout << endl;

    char arr2[7] = {'t', 'o', 'p', 's', 'p', 'o', 't'};  
    Array<char, 7> a2(arr2);
    a2.sum();
    a2.palindrome();
    return 0;
}