#include<stdio.h>

//Time complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    Pattern
//Description:      Display static contents
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             27/10/25
//
//////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}