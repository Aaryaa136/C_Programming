#include<stdio.h>

//Time complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    RangeDisplay
//Description:      Display range between two numbers 
//Input:            Integer,Integer
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt=0;

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}