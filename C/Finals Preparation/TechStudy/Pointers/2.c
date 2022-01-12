#include <stdio.h>
#include <stdlib.h>

void add(int *, int *, int *);

int main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    add(&a, &b, &c);
    printf("%d", c);
    return 0;
}

void add(int *a, int *b, int *c){
    *c = *a + *b;
}