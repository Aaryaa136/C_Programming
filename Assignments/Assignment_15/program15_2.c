#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    CountOdd
//Description:      Count odd digits in a number
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             31/10/25
//
//////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit=0;
    int iCount=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if((iDigit%2)!=0)
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=CountOdd(iValue);

    printf("Count of odd digits :%d",iRet);

    return 0;

}