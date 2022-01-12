#include <stdio.h>

int main(){
    int mobileprice, flag;
    flag = 0;
    float customduty, salestax, incometax, totaltax;

    printf("Enter price of the imported mobile? ");
    scanf("%d", &mobileprice);

    if(mobileprice>=0 && mobileprice<=30000){
        customduty = mobileprice * 0.01;
        salestax = mobileprice * 0.03;
        incometax = 0;
    }else if(mobileprice>=30001 && mobileprice<=50000){
        customduty = mobileprice * 0.04;
        salestax = mobileprice * 0.04;
        incometax = 0;
    }else if(mobileprice>=50001 && mobileprice<=75000){
        customduty = mobileprice * 0.08;
        salestax = mobileprice * 0.05;
        incometax = mobileprice * 0.03;
    }else if(mobileprice >= 75001){
        customduty = mobileprice * 0.15;
        salestax = mobileprice * 0.12;
        incometax = mobileprice * 0.06;
    }else{
        printf("\nWrong Input\n");
        flag = 1;
    }

    if(flag == 0){
        totaltax = customduty + salestax + incometax;
        printf("\nCustom Duty: %f", customduty);
        printf("\nSales Tax: %f", salestax);
        printf("\nIncome Tax: %f", incometax);
        printf("\nTotal tax payable: %f\n", totaltax);
    }

    return 0;
}