#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    FILE *fp;
    fp = fopen("test2.txt", "a+");
    fprintf(fp, "Ahsan Ashraf\n");
    fclose(fp);    
    return 0;
}