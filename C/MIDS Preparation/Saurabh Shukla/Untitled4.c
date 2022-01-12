#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    int choice ,a,n;
    char nps1,nps2,nps3,nps4,att1,att2,att3,t1,t2,t3,t4;
    char p1='A',p2='s',p3='a',p4='d'; //password
    
    
    printf("<1>press 1 to log in\n<2>reset password\n<3>exit \n");
    scanf("%d",&choice);
    fflush(stdin);
    
    
    if (choice==1 ){
       
       
        for(n=1;n<=3;n++){
            
        
        printf("Enter your password first digit\t\n");
        scanf("%c",&t1);
        fflush(stdin);
        printf(" second digit\t\n");
        scanf("%c",&t2);
        fflush(stdin);
        printf(" third digit\t\n");
        scanf("%c",&t3);
        fflush(stdin);
        printf(" fourth digit\t\n");
        scanf("%c",&t4);
        fflush(stdin);
        
        if((t1==p1)&&(t2==p2)&&(t3==p3)&&(t4==p4)){
            printf("You have logged in succesfully .....\n");
            break;
        }
        else{
            printf("Wrong password !!!\n");
        }
        
   }
   
       
    }
    else if(choice==2){
        
        printf("Your random num is : %d\n",rand());
        a=rand();
        printf("Enter the random number \n");
        scanf("%d",&a);
        
        if(a!=rand()){
            printf(" YOu HAVE ENTERED WRONG NUMBER !!!\n ");
            fflush(stdin);
        }
        else {
            printf("You are resetting your password \n ");
            fflush(stdin);
            
            printf("Enter first letter of your new password \n");
            scanf("%c",&nps1);
            printf(" second letter  \n");
            scanf("%c",&nps2);
            fflush(stdin);
            printf(" third letter  \n");
            scanf("%c",&nps3);
            fflush(stdin);
            printf(" fourth letter  \n");
            scanf("%c",&nps4);
            
            printf("Your new password is %c%c%c%c",nps1,nps2,nps3,nps4);
            
      }
    
    } 
    else if (choice==3){
        printf("You are exiting ");
       
    }
        
        
      return(0);  
    }