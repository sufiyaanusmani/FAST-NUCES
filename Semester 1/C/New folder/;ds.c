#include <stdio.h>
#include <string.h>

int main(){
	char str[100], enc[100] = "";
	int size, i, pos, vowelflag = 0;
	printf("Enter a string: ");
	gets(str);
	if(str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u'){
		strcat(enc, str);
		strcat(enc, "way");
		goto end;
	}
	for(i=0;str[i] != '\0';i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			pos = i;
			vowelflag = 1;
			break;
		}	
	}
	
	strcat(enc, &str[pos]);
	size = strlen(enc);
	for(i=0;i<pos;i++){
		enc[size+i] = str[i];
	}
	if(vowelflag == 1){
		strcat(enc, "ay");
	}
	end:
	puts(enc);
	return 0;
}
