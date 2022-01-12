#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int frequency[26] = {0}, i, max;
	char name[50], course[50], str1[100], str2[100], chMax;
	printf("Enter your name: ");
	gets(name);
	printf("Enter your courses separated by spaces: ");
	gets(course);
	
	strcpy(str1, name);
	strcat(str1, course);
	tolower(str1);
	for(i=0;str1[i] != '\0';i++){
		str2[i] = tolower(str1[i]);
	}
	
	for(i=0;str2[i] != '\0';i++){
		frequency[str2[i] - 'a']++;
	}
	
	printf("\n");
	for(i=0;i<26;i++){
		if(frequency[i] > 0){
			printf("%c occurs %d times\n", 97+i, frequency[i]);
		}
	}

	max = frequency[0];
	
	for(i=0;i<26;i++){
		if(frequency[i] > max){
			max = frequency[i];
			chMax = i + 26;
		}
	}
	
	printf("\n'%c' occured the most which was %d times\n", chMax+97, max);
	return 0;
}
