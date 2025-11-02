#include<stdio.h>

//Time complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    RangeDisplayEven
//Description:      Display sum of even range between two numbers 
//Input:            Integer,Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

int RangeSumEven(int iStart,int iEnd)
{
    int iRange=0;
    int iCnt=0;

    if(iStart<=0 || iEnd<=0)
    {
        return -1;
    }

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if((iCnt%2)==0)
        {
            iRange+=iCnt;
        }
        
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

    iRet=RangeSumEven(iValue1,iValue2);

    printf("Addition is:%d",iRet);

    return 0;
}