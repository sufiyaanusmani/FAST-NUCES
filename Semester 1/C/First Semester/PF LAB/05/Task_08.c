#include <stdio.h>

int main()
{
    int calMarks, pstMarks, engMarks, pfMarks, islMarks; //for storing marks of each subject
    int calHrs, pstHrs, engHrs, pfHrs, islHrs;           //for storing credit hours of each subject
    float calGp, pstGp, engGp, pfGp, islGp;              //for storing grade points of each subject
    float gpa;

    //input marks
    printf("Enter Calculus marks: ");
    scanf(" %d", &calMarks);
    printf("\nEnter Pak-Studies marks: ");
    scanf(" %d", &pstMarks);
    printf("\nEnter English Communication marks: ");
    scanf(" %d", &engMarks);
    printf("\nEnter Programming Fundamentals marks: ");
    scanf(" %d", &pfMarks);
    printf("\nEnter Ethics or Islamic Studies marks: ");
    scanf(" %d", &islMarks);

    //input credit hours
    printf("\n\nEnter Calculus credit hours: ");
    scanf(" %d", &calHrs);
    printf("\nEnter Pak-Studies credit hours: ");
    scanf(" %d", &pstHrs);
    printf("\nEnter English Communication credit hours: ");
    scanf(" %d", &engHrs);
    printf("\nEnter Programming Fundamentals credit hours: ");
    scanf(" %d", &pfHrs);
    printf("\nEnter Ethics or Islamic Studies credit hours: ");
    scanf(" %d", &islHrs);

    //calculus grade points
    if (calMarks >= 90 && calMarks <= 100)
    {
        calGp = 4.00;
    }
    else if (calMarks >= 87 && calMarks < 90)
    {
        calGp = 4.00;
    }
    else if (calMarks >= 83 && calMarks <= 86)
    {
        calGp = 3.67;
    }
    else if (calMarks >= 79 && calMarks <= 82)
    {
        calGp = 3.33;
    }
    else if (calMarks >= 75 && calMarks <= 78)
    {
        calGp = 3.00;
    }
    else if (calMarks >= 71 && calMarks <= 74)
    {
        calGp = 2.67;
    }
    else if (calMarks >= 67 && calMarks <= 70)
    {
        calGp = 2.33;
    }
    else if (calMarks >= 63 && calMarks <= 66)
    {
        calGp = 2.00;
    }
    else if (calMarks >= 59 && calMarks <= 62)
    {
        calGp = 1.67;
    }
    else if (calMarks >= 55 && calMarks <= 58)
    {
        calGp = 1.33;
    }
    else if (calMarks >= 50 && calMarks <= 54)
    {
        calGp = 1.00;
    }
    else if (calMarks >= 0 && calMarks <= 49)
    {
        calGp = 0.00;
    }


    //pak-studies grade points
    if (pstMarks >= 90 && pstMarks <= 100)
    {
        pstGp = 4.00;
    }
    else if (pstMarks >= 87 && pstMarks < 90)
    {
        pstGp = 4.00;
    }
    else if (pstMarks >= 83 && pstMarks <= 86)
    {
        pstGp = 3.67;
    }
    else if (pstMarks >= 79 && pstMarks <= 82)
    {
        pstGp = 3.33;
    }
    else if (pstMarks >= 75 && pstMarks <= 78)
    {
        pstGp = 3.00;
    }
    else if (pstMarks >= 71 && pstMarks <= 74)
    {
        pstGp = 2.67;
    }
    else if (pstMarks >= 67 && pstMarks <= 70)
    {
        pstGp = 2.33;
    }
    else if (pstMarks >= 63 && pstMarks <= 66)
    {
        pstGp = 2.00;
    }
    else if (pstMarks >= 59 && pstMarks <= 62)
    {
        pstGp = 1.67;
    }
    else if (pstMarks >= 55 && pstMarks <= 58)
    {
        pstGp = 1.33;
    }
    else if (pstMarks >= 50 && pstMarks <= 54)
    {
        pstGp = 1.00;
    }
    else if (pstMarks >= 0 && pstMarks <= 49)
    {
        pstGp = 0.00;
    }


    //english coommunication grade points
    if (engMarks >= 90 && engMarks <= 100)
    {
        engGp = 4.00;
    }
    else if (engMarks >= 87 && engMarks < 90)
    {
        engGp = 4.00;
    }
    else if (engMarks >= 83 && engMarks <= 86)
    {
        engGp = 3.67;
    }
    else if (engMarks >= 79 && engMarks <= 82)
    {
        engGp = 3.33;
    }
    else if (engMarks >= 75 && engMarks <= 78)
    {
        engGp = 3.00;
    }
    else if (engMarks >= 71 && engMarks <= 74)
    {
        engGp = 2.67;
    }
    else if (engMarks >= 67 && engMarks <= 70)
    {
        engGp = 2.33;
    }
    else if (engMarks >= 63 && engMarks <= 66)
    {
        engGp = 2.00;
    }
    else if (engMarks >= 59 && engMarks <= 62)
    {
        engGp = 1.67;
    }
    else if (engMarks >= 55 && engMarks <= 58)
    {
        engGp = 1.33;
    }
    else if (engMarks >= 50 && engMarks <= 54)
    {
        engGp = 1.00;
    }
    else if (engMarks >= 0 && engMarks <= 49)
    {
        engGp = 0.00;
    }


    //programming fundamentals grade points
    if (pfMarks >= 90 && pfMarks <= 100)
    {
        pfGp = 4.00;
    }
    else if (pfMarks >= 87 && pfMarks < 90)
    {
        pfGp = 4.00;
    }
    else if (pfMarks >= 83 && pfMarks <= 86)
    {
        pfGp = 3.67;
    }
    else if (pfMarks >= 79 && pfMarks <= 82)
    {
        pfGp = 3.33;
    }
    else if (pfMarks >= 75 && pfMarks <= 78)
    {
        pfGp = 3.00;
    }
    else if (pfMarks >= 71 && pfMarks <= 74)
    {
        pfGp = 2.67;
    }
    else if (pfMarks >= 67 && pfMarks <= 70)
    {
        pfGp = 2.33;
    }
    else if (pfMarks >= 63 && pfMarks <= 66)
    {
        pfGp = 2.00;
    }
    else if (pfMarks >= 59 && pfMarks <= 62)
    {
        pfGp = 1.67;
    }
    else if (pfMarks >= 55 && pfMarks <= 58)
    {
        pfGp = 1.33;
    }
    else if (pfMarks >= 50 && pfMarks <= 54)
    {
        pfGp = 1.00;
    }
    else if (pfMarks >= 0 && pfMarks <= 49)
    {
        pfGp = 0.00;
    }


    //ethics or islamic studies grade points
    if (islMarks >= 90 && islMarks <= 100)
    {
        islGp = 4.00;
    }
    else if (islMarks >= 87 && islMarks < 90)
    {
        islGp = 4.00;
    }
    else if (islMarks >= 83 && islMarks <= 86)
    {
        islGp = 3.67;
    }
    else if (islMarks >= 79 && islMarks <= 82)
    {
        islGp = 3.33;
    }
    else if (islMarks >= 75 && islMarks <= 78)
    {
        islGp = 3.00;
    }
    else if (islMarks >= 71 && islMarks <= 74)
    {
        islGp = 2.67;
    }
    else if (islMarks >= 67 && islMarks <= 70)
    {
        islGp = 2.33;
    }
    else if (islMarks >= 63 && islMarks <= 66)
    {
        islGp = 2.00;
    }
    else if (islMarks >= 59 && islMarks <= 62)
    {
        islGp = 1.67;
    }
    else if (islMarks >= 55 && islMarks <= 58)
    {
        islGp = 1.33;
    }
    else if (islMarks >= 50 && islMarks <= 54)
    {
        islGp = 1.00;
    }
    else if (islMarks >= 0 && islMarks <= 49)
    {
        islGp = 0.00;
    }

    //calculating GPA
    gpa = ((calGp * calHrs) + (pstGp * pstHrs) + (engGp * engHrs) + (pfGp * pfHrs) + (islGp * islHrs)) / (calHrs + pstHrs + engHrs + pfHrs + islHrs);

    printf("\n\nGPA: %.2f", gpa);
    return 0;
}