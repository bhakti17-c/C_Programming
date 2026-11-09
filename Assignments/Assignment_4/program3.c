 //Input: 10 20 → 20 is Greater
 //Input: 50 30 → 50 is Greater
 //Input: 15 15 → Both Numbers Are Equal

 ////////////////////////////////////////////
//
// Function name : FindGreater
// Description : To find largest no.
// Input  : Integer
// Oupput : Integer
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is greater \n",iFirst);
    }
    else if( iFirst == iSecond)
    {
        printf("Both no. are Equal.\n");
    }
    else
    {
        printf("%d is greater \n", iSecond);
    }
}
int main()
{
 int iValue1 = 0;
 int iValue2 = 0;
 printf("Enter two numbers: ");
 scanf("%d %d", &iValue1, &iValue2);
 FindGreater(iValue1, iValue2);
 return EXIT_SUCCESS;
}