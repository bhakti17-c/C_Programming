//Input : 7 
//Output: 2 4 6 8 10 12 14 

////////////////////////////////////////////
//
// Function name : PrintEven
// Description : To calculate even no. 
// Input  : Integer
// Oupput : Integer
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

#include<stdio.h>
void PrintEven(int iNo) 
{ 
 if(iNo <= 0) 
{ 
 return; 
} 
 int iEven = 0 ,iCnt = 0;
    iEven = 2;
    while(iCnt < iNo)
    {
        printf("%d\t",iEven);
        iEven = iEven + 2;
        iCnt++;
    }
} 
int main() 
{ 
 int iValue = 0; 
 
 printf("Enter number\n"); 
 scanf("%d",&iValue); 
 PrintEven(iValue); 
 return 0; 
}