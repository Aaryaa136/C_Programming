#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    NonFact
//Description:      Display non factors
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             25/10/25
//
//////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    if(iNo<=0)
    {
        iNo=-iNo;
    }

    int iCnt=0;

    for(iCnt=1; iCnt<=iNo ; iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d\n",iCnt);
        }
    }
    
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}