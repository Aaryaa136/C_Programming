#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//Function Name:    FactDiff
//Description:      Display difference between sumation of factors and non factors
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             25/10/25
//
//////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    if(iNo<=0)
    {
        return -1;
    }

    int iCnt=0;
    int iSumFact=0;
    int iSumNonFact=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSumFact+=iCnt;
        }
        else
        {
            iSumNonFact+=iCnt;
        }
    }

    return iSumNonFact-iSumFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("\nDifference between factors and non factors is:%d",iRet);

    return 0;
}