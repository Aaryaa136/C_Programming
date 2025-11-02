#include<stdio.h>

//Time complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    OddFactorial
//Description:      Print multiplication of odd factorial
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             28/10/25
//
//////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt=0;
    int iAns=1;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(iCnt=1 ; iCnt<=iNo ;iCnt++)
    {
        if((iCnt%2)!=0)
        {
            iAns*=iCnt;
        }
    }

    return iAns;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);

    printf("Even factorial of number is:%d",iRet);

    return 0;
}