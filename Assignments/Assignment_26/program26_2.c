#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Pattern
//Description:      Display linear pattern
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             22/11/25
//
//////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=iNo ; iCnt>=0 ; iCnt--)
    {
        printf("%d\t #\t",iCnt);
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