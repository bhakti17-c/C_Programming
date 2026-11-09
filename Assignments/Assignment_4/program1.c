//• Input: 15 → Positive Number
//• Input: -8 → Negative Number
//• Input: 0 → Zero

////////////////////////////////////////////
//
// Function name : CheckNumber
// Description : To check no. is positive ,negative or zero
// Input  : Integer
// Oupput : Integer
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
void CheckNumber(int iValue)
{
    if( iValue > 0)
    {
        printf("Positive  number\n");
    }
    else if (iValue < 0)
    {
        printf("Negative number\n");
    }
    else
    {
        printf("Zero\n");
    }
}
int main()
{
 int iValue = 0;
 printf("Enter a number: ");
 scanf("%d", &iValue);
 CheckNumber(iValue);
 return EXIT_SUCCESS;
}