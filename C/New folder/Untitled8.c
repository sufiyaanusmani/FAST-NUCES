#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	int i;
	int count[26] = {0};
	
	gets(str);
	for(i=0;str[i] != '\0';i++){
		count[str[i] - 'a']++;
	}
	for(i=0;i<26;i++){
		if(count[i] > 0){
			printf("%c: %d\n", i+'a', count[i]);
		}
	}
	return 0;
}
