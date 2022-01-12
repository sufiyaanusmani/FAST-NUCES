#include <stdio.h>

struct dateInfo{
	int day;
	int month;
	int year;
};

int main(){
	struct dateInfo d;
	printf("%d", sizeof(d));
	return 0;
}
