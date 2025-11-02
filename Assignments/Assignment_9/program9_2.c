#include<stdio.h>

//Time complexity:O(1)

//////////////////////////////////////////////////////////
//
//Function Name:    DollarToINR
//Description:      Converts Dollar into rupees 
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             28/10/25
//
//////////////////////////////////////////////////////////

int DollarToINR(int iUSD)
{
    if(iUSD<=0)
    {
        iUSD=-iUSD;
    }

    int INR=1;

    INR=iUSD*70;

    return INR;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter number of USD:");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);

    printf("Value in INR is:%d",iRet);

    return 0;
}