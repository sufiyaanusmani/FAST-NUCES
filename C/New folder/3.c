#include <stdio.h>

int main(){
    int pass, fail, grade, count;
    pass = 0;
    fail = 0;
    count = 1;

    while(count <= 10){
        printf("%d. Enter result (1. pass 2. fail): ", count);
        scanf("%d", &grade);
        printf("\n");
        if(grade == 1){
            pass++;
            count++;
        }else if(grade == 2){
            fail++;
            count++;
        }else{
            printf("\nWrong grade entered!\n");      
        }
    }

    printf("\nPASS: %d\nFAIL: %d", pass, fail);
    if(pass > 8){
        printf("\nBonus");
    }
    
    return 0;
}