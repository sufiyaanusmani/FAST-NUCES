#include <stdio.h>

int main(){
    int num1, num2, num3, total, product, smallest, largest;
    float avg;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    total = num1 + num2 + num3;
    avg = (float)total / 3;
    product = num1 * num2 * num3;
    smallest = num1;
    largest = num3;

    if(num2 < smallest){
        if(num2 < num3){
            smallest = num2;
        }else{
            smallest = num3;
        }
    }

        if(num2 > largest){
            if(num2 > num1){
                largest = num2;
            }else{
                largest = num1;
            }
        }

    printf("\nSum is %d", total);
    printf("\nAverage is %.0f", avg);
    printf("\nProduct is %d", product);
    printf("\nSmallest is %d", smallest);
    printf("\nLargest is %d\n", largest);
    return 0;
}