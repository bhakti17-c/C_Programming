//Input : 24
//Output: 1 2 4 6 8 12 

////////////////////////////////////////////
//
// Function name : DisplayFactor
// Description : To calculate Factors of given no. 
// Input  : Integer
// Oupput : Integer
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

#include<stdio.h>
void DisplayFactor(int iNo) 
{ 
int i = 0; 
 if(iNo <= 0) 
{
iNo = -iNo; 
} 
 for(i = 1; i <= iNo / 2 ;i++) 
{ 
 if( iNo % i == 0) 
 { 
    if(i % 2 == 0 || i == 1)
    {
      printf("%d\t",i);  
    }
 } 
} 
} 
int main() 
{ 
 int iValue = 0; 
 
 printf("Enter number\n"); 
 scanf("%d",&iValue); 
 DisplayFactor(iValue); 
 return 0;
}