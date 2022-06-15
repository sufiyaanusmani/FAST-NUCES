#include<iostream>
using namespace std;

class matrixType{
	public:
		int Row,Column;
		int **Matrix;
		//Constructor to initialize both rows and columns
     	matrixType(int r,int c){
		Row=r; 
		Column=c; 
		Matrix=new int*[Column];
	   	//Iniliaziting the entire Array 
		for(int i=0;i<Row;i++){
			Matrix[i]=new int[Column];
		}
		for(int i=0;i<Row;i++){
			for(int j=0;j<Column;j++){
			Matrix[i][j]=0;	
			}
		}
	}
	// + Operator Overloading of Two matrixes
		matrixType operator +(matrixType M1){
		//Firstly we will check before adding if the matrix we are adding having same rows and columns
	if(Row!=M1.Row || Column != M1.Column){
		 	matrixType tempmatrix(0,0); // if different
		 	cout << "Matrix cannot be added " << endl;
		 	return tempmatrix;
		 }else{
		 	matrixType temp(Row,Column);//if same
		 	for(int m=0;m<Row;m++){
		 		for(int n=0;n<Column;n++){
		 			temp.Matrix[m][n]+=M1.Matrix[m][n]+Matrix[m][n];
		 		}
		 	}
		 	 return temp;
		 }	
		}
			// - Operator Overloading of Two matrixes
		matrixType operator -(matrixType M1){
		//Firstly we will check before subtracting if the matrix we are adding having same rows and columns
	if(Row!=M1.Row || Column != M1.Column){
		 	matrixType tempmatrix(0,0); // if different
		 	cout << "Matrix cannot be subtracted" << endl;
		 	return tempmatrix;
		 }else{
		 	matrixType temp(Row,Column);//if same
		 	for(int m=0;m<Row;m++){
		 		for(int n=0;n<Column;n++){
		 			temp.Matrix[m][n]+=M1.Matrix[m][n]-Matrix[m][n];
		 		}
		 	}
		 	 return temp;
		 }	
		}
			// * Operator Overloading of Two matrixes
		matrixType operator *(matrixType M1){
		//Firstly we will check before multiplying if the matrix we are adding having same rows and columns
	if(Row!=M1.Row || Column != M1.Column){
		 	matrixType tempmatrix(0,0); // if different
		 	cout << "Matrix cannot be multiplied" << endl;
		 	return tempmatrix;
		 }else{
		 	matrixType temp(Row,Column);//if same
		 	for(int m=0;m<Row;m++){
		 		for(int n=0;n<Column;n++){
		 			temp.Matrix[m][n]+=(M1.Matrix[m][n]*Matrix[m][n]);
		 		}
		 	}
		 	 return temp;
		 }	
		}
friend ostream &operator<<(ostream &,const matrixType &m);		
};
ostream &operator<<(ostream &op,const matrixType &m){

        for (int i = 0; i < m.Row; i++)
        {
            for (int j = 0; j < m.Column; j++)
            {   op<<m.Matrix[i][j]<<"\t";
            }
            cout<<endl;
        }
        return(op);   
}
int main(){
  int rows,columns;
  cout << "Enter Rows and columns of Matrix One: ";
  cin >> rows >> columns;
  matrixType M1(rows,columns);
  cout << "Enter Matrix 1: "<< endl;
  for(int i=0;i<rows;i++){
  	for(int j=0;j<columns;j++){
  		cin >>M1.Matrix[i][j];
	  }
  }
 cout << "Enter Rows and columns of Matrix Two: ";
  cin >> rows >> columns;
  matrixType M2(rows,columns);
  cout << "Enter Matrix 2: "<< endl;
  for(int i=0;i<rows;i++){
  	for(int j=0;j<columns;j++){
  		cin >>M2.Matrix[i][j]; 
	  }
}
 matrixType M3=M1+M2;
 matrixType M4=M1-M2;
 matrixType M5=M1*M2;
 cout << "FIRST MATRIX:"<< endl;
 cout <<  M1;
 cout << "SECOND MATRIX:"<< endl;
 cout <<  M2;
 cout << "ADDITION:"<< endl;
 cout <<  M3;
 cout << "SUBTRACTION:"<< endl;
 cout <<  M4;
 cout << "MULTIPLICATION:"<< endl;
 cout <<  M5;
 return 0;
}