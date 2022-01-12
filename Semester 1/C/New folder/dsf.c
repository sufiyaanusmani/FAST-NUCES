#include<stdio.h>
#include<stdlib.h>

struct traveller_details{
	int travellerid;
	char travellername[18];
	int travellerage;
	char travellernum[40];
};
struct ticket{
	int seatno;
	char Busname[18];
	float price;
	char destcity[20];
	struct traveller_details traveller;
}ticket_arr[5];
float billdiscounts(float);
float calculatebill(struct ticket ticket_arr[],int count);
int main()
{
float b;
b=calculatebill(ticket_arr,2);
billdiscounts(b);
display(&ticket_arr,2);
return 0;
}

float calculatebill(struct ticket ticket_arr[],int count)
{
	int i;
	float bill;
	for(i=0;i<count;i++)
	{
	printf("\n Enter seat number: ");
	scanf("%d",&ticket_arr[i].seatno);
	fflush(stdin);
	printf("\n Enter bus name: ");
	gets(ticket_arr[i].Busname);
	printf("\n Enter destination city: ");
	gets(ticket_arr[i].destcity);
	printf("\n Enter Traveller Age: ");
	scanf("%d",&ticket_arr[i].traveller.travellerage);
	fflush(stdin);
	printf("\n Enter Traveller Id: ");
	scanf("%d",&ticket_arr[i].traveller.travellerid);
	fflush(stdin);
	printf("\n Enter Traveller Name:  ");
	gets(ticket_arr[i].traveller.travellername);
	fflush(stdin);
	printf("\n Enter Traveller Number: ");
	scanf("%d",&ticket_arr[i].traveller.travellernum);
	
	if((ticket_arr[i].traveller.travellerage)<15||(ticket_arr[i].traveller.travellerage)>60)
	{
		ticket_arr[i].price=4500;
	}
	else
	{
		ticket_arr[i].price=7000;
	}
	bill=(float)bill+ticket_arr[i].price;
}
return(bill);
}


float billdiscounts(float bill)
{
if(bill>10000)
{
	bill=bill-bill*0.1;
	printf("\n Bill is %.2f ",bill);
}
else if( bill >25000)
{
	bill=bill-bill*0.2;
	printf("\n Bill is %.2f ",bill);
}
else if(bill>50000)
{
	bill=bill-bill*0.3;
	printf("\n Bill is %.2f ",bill);
}
else
{
	printf("\n Bill is %.2f ",bill);
}
return 0;
}

int display(struct ticket *ticket_arr,int count)
{
	int i;
	printf("Customer Information: \n");
	for(i=0;i<count;i++)
	{
	printf("\n seat number: %d",ticket_arr[i].seatno);
	printf("\n Enter bus name: %s",ticket_arr[i].Busname);
	printf("\n Enter destination city:%s",ticket_arr[i].destcity);
	printf("\n Enter Traveller Age:%d ",ticket_arr[i].traveller.travellerage);
	printf("\n Enter Traveller Id:%d ",ticket_arr[i].traveller.travellerid);
	printf("\n Enter Traveller Name:%s ",ticket_arr[i].traveller.travellername);
	printf("\n Enter Traveller Number:%s",ticket_arr[i].traveller.travellernum);
}
}