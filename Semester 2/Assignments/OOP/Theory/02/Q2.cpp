// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
#include <iomanip>
using namespace std;

class MatrixType
{
    private:
        int row;
        int column;
        int **array;     // as MatrixType can be of any size, double pointer is used to dynamically allocate memory
    public:
        MatrixType(int row=0, int column=0){    // parameterized constructor
            this->row = row;
            this->column = column;
            int i;
            array = new int * [row];
            for(i=0;i<row;i++){
                array[i] = new int[column];
            }
        }
        MatrixType operator+(const MatrixType &m){
            int i, j;
            if(row == m.row && column == m.column){
                MatrixType temp(row, column);
                for(i=0;i<row;i++){
                    for(j=0;j<column;j++){
                        temp.array[i][j] = array[i][j] + m.array[i][j];
                    }
                }
                return temp;
            }else{
                MatrixType temp;
                cout << "Error, these matrices can not be added together" << endl;
                return temp;
            }
        }
        MatrixType operator-(const MatrixType &m){
            int i, j;
            if(row == m.row && column == m.column){
                MatrixType temp(row, column);
                for(i=0;i<row;i++){
                    for(j=0;j<column;j++){
                        temp.array[i][j] = array[i][j] -  m.array[i][j];
                    }
                }
                return temp;
            }else{
                MatrixType temp;
                cout << "Error, these matrices can not be subtracted together" << endl;
                return temp;
            }
        }
        MatrixType operator*(const MatrixType &m){
            int i, j, k;
            double sum;
            if(column == m.row){
                MatrixType temp(row, m.column);
                for(i=0;i<row;i++){
                    for(j=0;j<m.column;j++){
                        sum = 0.0;
                        for(k=0;k<column;k++){
                            sum += (array[i][k] * m.array[k][j]);
                        }
                        temp.array[i][j] = sum;
                    }
                }
                return temp;
            }else{
                MatrixType temp;
                cout << "Error, these matrices can not be multiplied together" << endl;
                return temp;
            }
        }
        friend istream & operator>>(istream &, MatrixType &);   // also overloaded >> operator to take input from user
        friend ostream & operator<<(ostream &, const MatrixType &);
};

istream & operator>>(istream &is, MatrixType &m){
    int i, j;
    for(i=0;i<m.row;i++){
        for(j=0;j<m.column;j++){
            cout << "Row " << i+1 << ", Column " << j+1 << ": ";
            is >> m.array[i][j];
        }
    }
    return is;
}

ostream & operator<<(ostream &os, const MatrixType &m){
    int i, j;
    for(i=0;i<m.row;i++){
        for(j=0;j<m.column;j++){
            os << setw(3) << m.array[i][j] << "  ";
        }
        cout << endl;
    }
    return os;
}

int main(){
    int row, column;

    cout << "Enter number of rows of matrix 1: ";
    cin >> row;
    cout << "Enter number of column of matrix 1: ";
    cin >> column;
    MatrixType m1(row, column);
    cin >> m1;

    cout << endl << "Enter number of rows of matrix 2: ";
    cin >> row;
    cout << "Enter number of column of matrix 2: ";
    cin >> column;
    MatrixType m2(row, column);
    cin >> m2;  // using >> operator

    cout << endl << "***** Matrix 1 *****" << endl;
    cout << m1 << endl;     // using << operator

    cout << "***** Matrix 2 *****" << endl;
    cout << m2 << endl;

    cout << "ADDING BOTH MATRICES" << endl;
    cout << m1 + m2 << endl << endl;    // using + operator

    cout << "SUBTRACTING BOTH MATRICES" << endl;
    cout << m1 - m2 << endl << endl;        // using - operator

    cout << "MULTIPLYING BOTH MATRICES" << endl;
    cout << m1 * m2 << endl;        // using * operator
    return 0;
}