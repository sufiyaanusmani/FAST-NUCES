//	*
//   * *
//  * * *
// * * * *
//* * * * *
//
//i	k	j
//1		  5			j>=5 && j<=5  		j>=6-i && j<=4+i
//2	     4 6			j>=4 && j<=6
//3	    3 5 7			j>=3 && j<=7
//4    2 4 6 8		j>=2 && j<=8
//5   1 3 5 7 9		j>=1 && j<=9
//	
#include <stdio.h>

int main(){
	int i, j, k;
	
	for(i=1;i<=5;i++){
		k = 0;
		for(j=1;j<=9;j++){
			if(j>=6-i && j<=4+i && k==0){
				printf("*");
				k=1;
			}else{
				printf(" ");
				k=0;
			}
		}
		printf("\n");
	}
	
	return 0;
}