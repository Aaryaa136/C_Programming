#include<stdio.h>

//Time complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    RangeSum
//Description:      Display sum of range between two numbers 
//Input:            Integer,Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

int RangeSum(int iStart,int iEnd)
{
    int iRange=0;
    int iCnt=0;

    if(iStart<=0 || iEnd<=0)
    {
        return -1;
    }

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iRange+=iCnt;
    }

    return iRange;
}

int main()
{
    int iValue1=0,iValue2=0;
    int iRet=0;

    printf("Enter starting point:");
    scanf("%d",&iValue1);

    printf("Enter ending point:");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    printf("Addition is:%d",iRet);

    return 0;
}