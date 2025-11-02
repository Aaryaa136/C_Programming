#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    FactRev
//Description:      Display factors in reverse order
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             25/10/25
//
//////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    if(iNo<=0)
    {
        iNo=-iNo;
    }

    int iCnt=0;


    for(iCnt=(iNo/2) ; iCnt>=1; iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}