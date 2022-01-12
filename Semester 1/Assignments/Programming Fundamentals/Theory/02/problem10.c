#include <stdio.h>

int main()
{
    int numInput, d1, d2, d3, d4, encrypted; //these variables are used for encryption
    int decrypted;
    int temp, flag1, flag2, flag3, flag4;
    flag1 = flag2 = flag3 = flag4 = 0;
    printf("Enter any four digit integer: ");
    scanf("%d", &numInput);
    if ((numInput > 0) && (numInput > 999 && numInput <= 9999))
    {
        temp = numInput;
        d4 = temp % 10;
        temp = temp / 10;
        d3 = temp % 10;
        temp = temp / 10;
        d2 = temp % 10;
        d1 = temp / 10;

        d1 = (d1 + 5) % 8;
        d2 = (d2 + 5) % 8;
        d3 = (d3 + 5) % 8;
        d4 = (d4 + 5) % 8;

        encrypted = (d2 * 1000) + (d1 * 100) + (d4 * 10) + (d3);

        printf("\nThe encrypted integer is %d", encrypted);

        //this program will be used for decryption
        //reusing d1, d2, d3, d4 for this program
        temp = encrypted;
        d3 = temp % 10;
        temp = temp / 10;
        d4 = temp % 10;
        temp = temp / 10;
        d1 = temp % 10;
        d2 = temp / 10;

        d1 = (d1 + 3);
        d2 = (d2 + 3);
        d3 = (d3 + 3);
        d4 = (d4 + 3);

        if (d1 > 7)
        {
            d1 = d1 % 10;
        }
        else
        {
            d1 = d1 % 8;
        }
        if (d2 > 7)
        {
            d2 = d2 % 10;
        }
        else
        {
            d2 = d2 % 8;
        }
        if (d3 > 7)
        {
            d3 = d3 % 10;
        }
        else
        {
            d3 = d3 % 8;
        }
        if (d4 > 7)
        {
            d4 = d4 % 10;
        }
        else
        {
            d4 = d4 % 8;
        }

        decrypted = (d1 * 1000) + (d2 * 100) + (d3 * 10) + (d4);

        printf("\nThe decrypted integer is %d", decrypted);

        //checking if encrypted and decrypted numbers are same
        if(numInput == decrypted){
            printf("\nThe data before encryption and after encryption is the same. Congrats!\n");
        }else{
            printf("\nThe data before encryption and after decryption is not the same. Troubleshoot your code!\n");
        }
    }
    else
    {
        printf("\nInvalid Input. Try again.\n");
    }
    return 0;
}