#include <stdio.h>

int main(){
    int num, d1, d2, d3, d4, rollNo, count;
    count = 0;

    printf("Enter a four digit positive integer: ");
    scanf("%d", &num);
    

    if(num > 0 && (num > 999) && (num <= 9999)){
    	printf("Enter the last character of your roll number: ");
   		scanf("%d", &rollNo);
        d4 = num % 10;      //to separate fourth digit
        num = num / 10;
        d3 = num % 10;      //to separate third digit
        num = num / 10;
        d2 = num % 10;      //to separate second digit
        num = num / 10;
        d1 = num;           //to separate first digit

        if(d1 == rollNo){
            count++;
        }
        if(d2 == rollNo){
            count++;
        }
        if(d3 == rollNo){
            count++;
        }
        if(d4 == rollNo){
            count++;
        }

        printf("%d occured %d times", rollNo, count);

    }else{
        printf("Invalid input! Execute program again and then enter a valid integer.");
    }

    
    return 0;
}