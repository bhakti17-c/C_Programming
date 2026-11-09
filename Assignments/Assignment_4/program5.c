//Input: 45 → Divisible by 5
// Input: 23 → Not Divisible by 5

////////////////////////////////////////////
//
// Function name : CheckDivisibility
// Description : To check no is divisible by 5 or not
// Input  : Integer
// Oupput : Integer
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
void CheckDivisibility(int iValue)
{
    if( iValue % 5 == 0)
    {
        printf("Divisibile by 5 \n");
    }
    else
    {
        printf("Not Divisibile by 5 \n");
    }
}
int main()
{
 int iValue = 0;
 printf("Enter a number: ");
 scanf("%d", &iValue);
 CheckDivisibility(iValue);
 return EXIT_SUCCESS;
}