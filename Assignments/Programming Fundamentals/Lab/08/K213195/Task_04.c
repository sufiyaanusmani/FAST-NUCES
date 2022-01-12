#include <stdio.h>
#include <conio.h>

int main(){
	char name[100], ch, alpha;
	int count[26] = {0}; 
	int size, i, j;
	size = 0;
	
	printf("Enter your name: ");
	
	while(1){
		ch = getche();
		if(ch == 13){
			break;
		}else if(ch == 32){
			
		}else{
			name[size] = ch;
			size++;
		}
	}
	
	for(i=0;i<=size-1;i++){
		if(name[i] >= 'a' && name[i] <= 'z'){
			j = name[i] - 'a';
			count[j]++;
		}
	}
	printf("\n\nAlphabets |  Count\n---------------------\n");
	for(i=0;i<=25;i++){
		if(count[i] >= 1){
		printf("%c         |         %-2d\n", i+'a', count[i]);
		}
	}
	
	return 0;
}