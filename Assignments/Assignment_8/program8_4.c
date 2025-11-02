#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    Table
//Description:      Print table
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             28/10/25
//
//////////////////////////////////////////////////////////

void Table(int iNo)
{
   int iCnt=0;

   for(iCnt=1;iCnt<=10;iCnt++)
   {
    printf("%d\n",iCnt*iNo);
   }
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}