#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a, b;
    float c;

    //calculate the another side using Pythagoras Theorem
    //a*a + b*b = c*c
    //c = sqrt(a*a+b*b)
    //maximum length should be equal to 30
    for(a=1;a<=30;a++)
    {
        for(b=1;b<=30;b++)
        {
            c = sqrt(a*a+b*b);
            if(c == (int)c)
            {
                printf("(%d, %d, %d)\n",a,b,(int)c);
            }
        }
    }
}