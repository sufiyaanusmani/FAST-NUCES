#include <stdio.h>

int main(){
	char name[][20] = {
		"Sufiyaan",
		"Qasim",
		"Ahsan"
	};
	int i, j;
	char (*ptr)[20] = &name[0];
	
	for(i=0;i<4;i++){
		puts(*(ptr+i));
	}
	return 0;
}
