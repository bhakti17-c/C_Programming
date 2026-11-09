//Input: 21 → Eligible for Voting
//Input: 16 → Not Eligible for Voting
//Input: -5 → Invalid Age

////////////////////////////////////////////
//
// Function name : CheckVotingEligibility
// Description : To find voting eligibility
// Input  : Integer
// Oupput : Integer
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
void CheckVotingEligibility(int iAge)
{
    if(  iAge > 18)
    {
        printf("Eligibile for voting \n");
    }
    else if( iAge < 0)
    {
        printf("Invalid input !!!\n");    
    }
    else
    {
       printf("Not Eligibile for voting \n"); 
    }
}
int main()
{
 int iAge = 0;
 printf("Enter your age: ");
 scanf("%d", &iAge);
 CheckVotingEligibility(iAge);
 return EXIT_SUCCESS;
}