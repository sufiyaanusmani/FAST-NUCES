#include <stdio.h>
#include <stdlib.h>

int menu();
void addNewStudent();

struct StudentInfo{
    char firstName[10];
    char lastName[10];
    int rollno;
    char programme[2];
};

    struct StudentInfo student;
    FILE *fp;

int main(){
    int x;
    do{
    x = menu();    
    switch(x){
        case 1:
            addNewStudent();
            break;
        // case 2:
        //     searchStudent();
        //     break;
        case 3:
        exit(0);
        case 4:
            moneyTransfer();
            break;
        default:
            printf("Wrong choice entered. Enter again\n");  
            Sleep(1000);  
    }
    }while(1);
    return 0;
}

int menu(){
    int choice;
    system("cls");
    printf("Student Database\n");
    printf("1. Add new student\n");
    printf("2. Search student\n");
    printf("3. Exit\n");
    printf("4. Money transfer\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    return choice;
}

void addNewStudent(){
    system("color 02");
    system("cls");
    printf("Enter roll no: ");
    scanf("%d", &student.rollno);
    printf("Enter first name: ");
    fflush(stdin);
    scanf("%s", &student.firstName);
    printf("Enter last name: ");
    fflush(stdin);
    scanf("%s", &student.lastName);
    printf("Enter your programme: ");
    fflush(stdin);
    scanf("%s", &student.programme);

    fp = fopen("info.txt", "a");
    if(fp == NULL){
        printf("Error!");
        exit(1);
    }
    fprintf(fp, "%-4d %-10s %-10s %-2s\n", student.rollno, student.firstName, student.lastName, student.programme);
    fclose(fp);
}

void moneyTransfer(){
    int senderRollNo, receiverRollNo, amountToTransfer;
    system("cls");
    printf("Enter your account number: ");
    scanf("%d", &senderRollNo);
    fp = fopen("info.txt", "a");
    while(fscanf(fp, "%4d %10s %10s %2s\n", &student.rollno, &student.firstName, &student.lastName, &student.programme) != EOF){
        if(senderRollNo == student.rollno){
            printf("Enter amount to transfer: ");
            scanf("%d", &amountToTransfer);
            if(amountToTransfer > )
        }
    }
}