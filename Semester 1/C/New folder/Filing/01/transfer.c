#include <stdio.h>
#include <stdlib.h>

struct MoneySender{
    int rollno;
    char name[10];
    int amount;
};
struct MoneyReceiver{
    int rrollno;
    char rname[10];
    int ramount;
};
struct Info{
    int rollno;
    char name[10];
    int amount;
};

int newAmount;



int main(){
    struct MoneySender sender;
    struct MoneyReceiver receiver;
    struct Info customer;
    FILE *fp;
    FILE *temp;
    int senderRollNo, receiverRollNo, amountToSend;
    system("cls");
    fp = fopen("studentinfo.txt", "r");
    fseek(fp, 0, SEEK_SET);
    printf("Enter your roll no: ");
    scanf("%d", &senderRollNo);
    while(fscanf(fp, "%4d %10s %6d\n", &sender.rollno, sender.name, &sender.amount) != EOF){
        printf("%d", sender.rollno);
        if(senderRollNo == sender.rollno){
            system("cls");
            printf("Roll no: %d\nName: %s\n", sender.rollno, sender.name);    
            break;
        }
        
    }


            fseek(fp, 0, SEEK_SET);
            printf("\nEnter receiver's roll no: ");
            scanf("%d", &receiverRollNo);
    while(fscanf(fp, "%4d %10s %6d\n", &receiver.rrollno, receiver.rname, &receiver.ramount) != EOF){
                if(receiverRollNo == receiver.rrollno){
                    system("cls");
                    printf("Roll no: %d\nName: %s\n", receiver.rrollno, receiver.rname);
                    printf("\nEnter amount to transfer: ");
                    scanf("%d", &amountToSend);
                    newAmount = receiver.ramount + amountToSend;
                    break;
                }
            }
            fseek(fp, 0, SEEK_SET);
            temp = fopen("temp.txt", "w");
            while(fscanf(fp, "%4d %10s %6d\n", &customer.rollno, customer.name, &customer.amount) != EOF){
                if(customer.rollno == receiver.rrollno){
                    fprintf(temp, "%-4d %-10d %-6d\n", customer.rollno, customer.name, newAmount);
                }else if(customer.rollno == sender.rollno){
                    fprintf(temp, "%-4d %-10d %-6d\n", customer.rollno, customer.name, customer.amount-amountToSend);
                }else{
                    fprintf(temp, "%-4d %-10d %-6d\n", customer.rollno, customer.name, customer.amount);
                }
            } 
            
            fclose(temp);
            fclose(fp);
            remove("studentinfo.txt");
            rename("temp.txt", "studentinfo.txt");
    return 0;
}
