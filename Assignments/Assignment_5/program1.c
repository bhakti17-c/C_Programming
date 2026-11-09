// Input: 10 50 30 → 50 is Greatest
// Input: 40 40 20 → 40 is Greatest
// Input: 15 15 15 → 15 is Greatest
#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////
//
// Function name : FindGreatest
// Description : To check greatest no. among 3 no's 
// Input  : Integer
// Oupput : Integer
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if( iFirst > iSecond && iFirst > iThird)
    {
        printf(" %d is greatest.\n",iFirst);
    }
    else if( iSecond > iThird)
    {
       printf(" %d is greatest.\n",iSecond);  
    }
    else
    {
        printf("%d is greatest .\n", iThird);
    }
}
int main()
{
 int iValue1 = 0, iValue2 = 0, iValue3 = 0;
 printf("Enter three numbers: ");
 scanf("%d %d %d", &iValue1, &iValue2, &iValue3);
 FindGreatest(iValue1, iValue2, iValue3);
 return EXIT_SUCCESS;
}