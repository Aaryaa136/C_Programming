#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    ChkZero
//Description:      Check if digit has 0  in it
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             30/10/25
//
//////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit=0;

    if(iNo==0)
    {
        return TRUE;
    }
    
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}