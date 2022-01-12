#include <stdio.h>
#include <string.h>

int method1(char *, char *);
void method2(char *, char *, int *, int *, int *, int *);

int main(){
	int aCount, cCount, gCount, tCount;
	aCount = cCount = gCount = tCount = 0;
	char A[] = "gtggcaacgtgc";
	char B[] = "gtagcagcgcgc";
	char C[] = "gcggcacagggt";
	char D[] = "gtgacaacgtgc";
	int count;
	count = method1(A, B);
	printf("Method 1: Total Discrepancies: %d", count);
	method2(A, B, &aCount, &cCount, &gCount, &tCount);
	printf("\nMethod 2:\na: %d\nc: %d\ng: %d\nt: %d\n", aCount, cCount, gCount, tCount);
	return 0;
}

int method1(char *str1, char *str2){
	int count = 0;
	int i;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i] != str2[i]){
			count++;
		}
	}
	return count;
}

void method2(char *str1, char *str2, int *a, int *c, int *g, int *t){
	int i;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i] == 'a' && str2[i] != 'a'){
			*a = *a + 1;
		}
		if(str1[i] == 'c' && str2[i] != 'c'){
			*c = *c + 1;
		}
		if(str1[i] == 'g' && str2[i] != 'g'){
			*g = *g + 1;
		}
		if(str1[i] == 't' && str2[i] != 't'){
			*t = *t + 1;
		}
	}
}