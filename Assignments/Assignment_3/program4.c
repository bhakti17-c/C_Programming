//Input : a Output : A 
//Input : D Output : d 

////////////////////////////////////////////
//
// Function name : DisplayConvert
// Description : To convert lower case to uppercase of given character
// Input  : Character
// Oupput : Character
// Author : Bhakti Ajay Choudhary
//
///////////////////////////////////////////

#include<stdio.h>
void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c", CValue - 32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);
    }
}
int main() 
{ 
 char cValue = '\0'; 
 
 printf("Enter character\n"); 
 scanf("%c" , &cValue); 
 DisplayConvert (cValue ); 
 return 0; 
}