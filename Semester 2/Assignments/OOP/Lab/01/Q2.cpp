#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int matA[2][2], matB[2][2], matC[2][2], result[2][2];
    int i, j;

    cout << "Input for Matrix A" << endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout << "Row " << i+1 << ", Column " << j+1 << ": ";
            cin >> matA[i][j];
        }
    }

    cout << endl << "Input for Matrix B" << endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout << "Row " << i+1 << ", Column " << j+1 << ": ";
            cin >> matB[i][j];
        }
    }

    cout << endl << "Input for Matrix C" << endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout << "Row " << i+1 << ", Column " << j+1 << ": ";
            cin >> matC[i][j];
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            result[i][j] = matA[i][j] + 2*matB[i][j] - matC[i][j];
        }
    }

    cout << endl << "Result: " << endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout << result[i][j] << "   ";
        }
        cout << endl;
    }
    return 0;
}