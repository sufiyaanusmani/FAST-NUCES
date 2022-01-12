#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[100];
    char *s;
    int size, i;
    s = str;
    gets(str);
    for(i=0;*(s + i) != '\0';i++);
    printf("%d", i);
    return 0;
}