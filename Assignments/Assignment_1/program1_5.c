#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Accept
//Description:      Display static content
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             20/10/25
//
//////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue=0;

    printf("Enter frequency:");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}