//Input: 2024 → Leap Year
//Input: 1900 → Not a Leap Year
//Input: 2000 → Leap Year

////////////////////////////////////////////
//
// Function name : CheckLeapYear
// Description : To check leap year
// Input  : Integer
// Oupput : Integer
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
void CheckLeapYear(int iYear)
{
   if ( iYear % 400 == 0 || ((iYear % 4 ==00)&&(iYear % 100 != 0)))
   {
    printf(" %d is leap year\n",iYear);
   } 
   else
   {
    printf(" %d is not leap year\n",iYear);
   }
}
int main()
{
 int iYear = 0;
 printf("Enter year: ");
 scanf("%d", &iYear);
 CheckLeapYear(iYear);
 return EXIT_SUCCESS;
}