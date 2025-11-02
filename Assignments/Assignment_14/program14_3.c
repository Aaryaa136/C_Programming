#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    CountTwo
//Description:      Count frequency of a digit which has 2 in it
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             30/10/25
//
//////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit=0;
    int iCount=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==2)
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

    iRet=CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}