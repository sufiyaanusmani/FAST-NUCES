#include <stdio.h>
#include <conio.h>

int main(){
    int y;
    float i, x;

    printf("%s%8s%8s\n", "y", "x", "i");
    printf("-----------------\n");
    
    for(y=1;y<=6;y++){
    	for(x=5.5;x<=12.5;x+=0.5){
    		i = 2 + (y + 0.5*x);
    		printf("%d%8.1f%8.2f\n", y, x, i);
		}
		printf("\n");
	}
    return 0;
}