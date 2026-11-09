// Input: 24 → Even Number
// Input: 17 → Odd Number

////////////////////////////////////////////
//
// Function name : CheckEvenOdd
// Description : To check no. is odd or even
// Input  : Integer
// Oupput : Integer
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
void CheckEvenOdd(int iValue)
{
    if ((iValue % 2) == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}
int main()
{
 int iValue = 0;
 printf("Enter a number: ");
 scanf("%d", &iValue);
 CheckEvenOdd(iValue);
 return EXIT_SUCCESS;
}