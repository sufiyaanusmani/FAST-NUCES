#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char name[10];
    int rollno, amount;
    fp = fopen("studentinfo.txt", "a");
    if(fp == NULL){
        printf("Error!");
        exit(1);
    }    
    printf("Enter four digit roll no: ");
    scanf("%d", &rollno);
    printf("Enter name: ");
    fflush(stdin);
    scanf("%s", name);
    printf("Enter amount: ");
    scanf("%d", &amount);

    fprintf(fp, "%d %-10s %-6d\n", rollno, name, amount);
    printf("Data added successfully");
    fclose(fp);
    return 0;
}