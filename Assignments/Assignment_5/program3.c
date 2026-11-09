//Input: 85 → Grade B
//Input: 35 → Fail
//Input: 105 → Invalid Marks

////////////////////////////////////////////
//
// Function name : Display Grade
// Description : To check grade from entered marks
// Input  : Integer
// Oupput : character
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
void DisplayGrade(float fMarks)
{
    if( fMarks >= 90 && fMarks <= 100)
    {
        printf(" A Grade .\n");
    }
    else if( fMarks >= 75 && fMarks <= 89)
    {
        printf(" B Grade .\n");
    }
    else if( fMarks >= 60 && fMarks <= 74)
    {
        printf(" C Grade .\n");
    }
    else if( fMarks >= 40 && fMarks <= 59)
    {
        printf(" D Grade .\n");
    }
    else if ( fMarks < 40)
    {
        printf("Fail !!\n");
    }
    else
    {
        printf("Invalid Input");
    }

 
}
int main()
{
 float fMarks = 0.0f;
 printf("Enter marks: ");
 scanf("%f", &fMarks);
 DisplayGrade(fMarks);
 return EXIT_SUCCESS;
}