#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void SentenceCase(char *, int *);

int main(){
    int size;
    char sentence[250];
    printf("Enter sentence:\n");
    gets(sentence);
    size = strlen(sentence) + 1; // +1 for null character
    SentenceCase(sentence, &size);
    printf("\n");
    puts(sentence);
    return 0;
}

void SentenceCase(char *text, int *size){
    int i;
    char *ptrText;
    ptrText = (char *)malloc(*size * sizeof(char));
    if(ptrText == NULL){
        printf("Error, can not allocate\n");
        exit(1);
    }
    strcpy(ptrText, text);
    if(*ptrText >= 'a' && *ptrText <= 'z'){ // this is used to capitalize first letter of the first word of the sentence
    *ptrText -= 32;
    }
    for(i=0;*(ptrText + i) != '\0';i++){
        if(*(ptrText + i) == '.'){
            if(*(ptrText + 1 + i) >= 'a' && *(ptrText + 1 + i) <= 'z'){ // no need to capitalize if it is already a capital letter
            *(ptrText + 1 + i) -= 32;
            }
        }
    }
    strcpy(text, ptrText);
    free(ptrText);
}