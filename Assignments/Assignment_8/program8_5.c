#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    TableRev
//Description:      Print table in reverse order
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             28/10/25
//
//////////////////////////////////////////////////////////

void TableRev(int iNo)
{
   int iCnt=0;

   for(iCnt=10;iCnt>=1;iCnt--)
   {
    printf("%d\n",iCnt*iNo);
   }
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}