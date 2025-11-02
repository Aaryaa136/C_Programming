#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    Factorial
//Description:      Display factorial of number
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             28/10/25
//
//////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt=0;
    int iAns=1;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(iCnt=1 ; iCnt<=iNo ;iCnt++)
    {
        iAns*=iCnt;
    }

    return iAns;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of number is:%d",iRet);

    return 0;
}