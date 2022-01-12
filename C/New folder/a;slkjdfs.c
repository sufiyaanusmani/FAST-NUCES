#include <stdio.h>
#include <stdlib.h>

struct Info{
	int id;
	int cls;
};

struct Info input(struct Info e){
	e.id = 23;
	e.cls =  3;
	return e;
}

int main(){
	struct Info i;
	i = input(i);
	printf("ID: %d, CLS: %d\n", i.id, i.cls);
}