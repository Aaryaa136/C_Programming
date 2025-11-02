#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    FactorialDiff
//Description:      Print difference of even and odd factorial
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             28/10/25
//
//////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt=0;
    int iEvenFact=1,iOddFact=1;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(iCnt=1 ; iCnt<=iNo ;iCnt++)
    {
        if((iCnt%2)==0)
        {
            iEvenFact*=iCnt;
        }
        else
        {
            iOddFact*=iCnt;
        }
    }

    return iEvenFact-iOddFact;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Even factorial of number is:%d",iRet);

    return 0;
}