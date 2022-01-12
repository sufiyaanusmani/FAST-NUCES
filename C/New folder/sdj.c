#include <stdio.h>

int main(){
	int arr[] = {5, 2, 3, 55, 3, 5, 23, 32, 3, 5};
	int isUnique = 1;
	int i, j, num;
	for(i=0;i<10;i++){
		isUnique = 1;
		num = arr[i];
		for(j=0;j<10;j++){
			if(num == arr[j] && i != j){
				isUnique = 0;
				break;
			}
		}
		if(isUnique == 1){
			printf("%d ", arr[i]);
		}
	}
	return 0;
}
