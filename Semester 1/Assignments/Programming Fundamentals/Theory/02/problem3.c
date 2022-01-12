// Source for rules of quadrilaterals: www.mathisfun.com

#include <stdio.h>

int main()
{
    int l1, l2, l3, l4, a1, a2, a3, a4;

    printf("---ENTER LENGTH OF QUADILATERAL SIDES IN ORDER---");
    printf("\nEnter length of first side  : ");
    scanf("%d", &l1);
    printf("\nEnter length of second side : ");
    scanf("%d", &l2);
    printf("\nEnter length of third side  : ");
    scanf("%d", &l3);
    printf("\nEnter length of fourth side : ");
    scanf("%d", &l4);

    printf("\n\n---ENTER ANGLE OF QUADILATERAL SIDES IN ORDER---");
    printf("\nEnter first angle  : ");
    scanf("%d", &a1);
    printf("\nEnter second angle : ");
    scanf("%d", &a2);
    printf("\nEnter third angle  : ");
    scanf("%d", &a3);
    printf("\nEnter fourth angle : ");
    scanf("%d", &a4);

    if (a1 + a2 + a3 + a4 == 360)
    { // sum of angles in a quadrilateral is always 360 degrees
        if ((l1 == l2 && l1 == l3 && l1 == l4) && (a1 == 90 && a2 == 90 && a3 == 90 && a4 == 90))
        { //Sqaure: all sides equal, all angles 90 degrees
            printf("\nShape is a Square\n");
        }
        else if ((l1 == l3 && l2 == l4 && l1 != l2 && l3 != l4) && (a1 == 90 && a2 == 90 && a3 == 90 && a4 == 90))
        { //Rectangle: opposite sides equal, all angles 90 degrees
            printf("\nShape is a Rectangle\n");
        }
        else if ((l2 == l2 && l1 == l3 && l1 == l4) && (a1 == a3 && a2 == a4) && ((a1 + a2 == 180) && (a3 + a4 == 180)))
        { //Rhombus: all sides equal, opposite angles equal, adjacent angles are supplementary
            printf("\nShape is a Rhombus\n");
        }
        else if (((l1 == l2 && l3 == l4) || (l1 == l4 && l2 == l3)) && ((a1 == a3) || (a2 == a4)))
        { //Kite: Adjacent sides are equal, only one pair of opposite angles are equal
            printf("\nShape is a Kite\n");
        }
        else if ((l1 == l3 && l2 == l4) && (a1 == a3 && a2 == a4))
        { //opposite sides are equal and opposite angles are equal
            printf("\nShape is a Paralleogram\n");
        }
        else if ((a1 + a2 == 180 && a3 + a4 == 180) || (a1 + a4 == 180 && a2 + a3 == 180))
        { // sum of adjacent angles is 180 degrees
            printf("\nShape is a Trapezoid\n");
        }else{
            printf("\nNot a given quadrilateral\n");
        }
    }else{
        printf("\nERROR! Sum of angles in a quadrilateral must be 360 degrees\n");
    }
    return 0;
}