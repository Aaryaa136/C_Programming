#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    Count
//Description:      Count frequency of a digit which is less then 6
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             30/10/25
//
//////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit=0;
    int iCount=0;
    
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit<6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=Count(iValue);

    printf("%d",iRet);

    return 0;
}