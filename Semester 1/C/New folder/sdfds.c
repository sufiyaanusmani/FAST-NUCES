#include <stdio.h>

int main(){
	char str[100] = "/ya/und\\s\\";
	int start, end, count, temp, i;
	char tempStr[10];
	count = 0;
	for(i=0;str[i]!='\0';i++){
		while(1){
			if(str[i] == '/' && count != 2){
				count++;
				if(count==2){
					break;
				}
			}
		}
		start = i;
		if(str[i] == '\\'){
			end = i;
			break;
		}
	}
	for(i=start;i<=end;i++){
		tempStr[i] = str[i];
	}
	puts(temp);
	return 0;
}
