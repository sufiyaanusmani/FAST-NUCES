#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    FILE *temp;
    int rollno, fileroll, currentAmount, amount;
    char name[10];
    printf("Enter roll no to search: ");
    scanf("%d", &rollno);
    fp = fopen("studentinfo.txt", "r");
    if(fp == NULL){
        printf("File not found");
        exit(1);
    }
    while(fscanf(fp, "%4d %10s %6d\n", &fileroll, name, &currentAmount) != EOF){
        if(rollno == fileroll){
            printf("Enter amount to widthdraw: ");
            scanf("%d", &amount);
            break;
        }
    }
    fclose(fp);
    fp = fopen("studentinfo.txt", "a+");
    temp = fopen("temp.txt", "w");
    if(fp == NULL){
        printf("File not found");
        exit(1);
    }
    while(fscanf(fp, "%4d %10s %6d\n", &fileroll, name, &currentAmount) != EOF){
        if(rollno == fileroll){
            fprintf(temp, "%d %-10s %-6d\n", rollno, name, currentAmount-amount);
        }else{
            fprintf(temp, "%d %-10s %-6d\n", fileroll, name, currentAmount);
        }
    }
    fclose(temp);
    fclose(fp);
    remove("studentinfo.txt");
    rename("temp.txt", "studentinfo.txt");
    return 0;
}