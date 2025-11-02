#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    CountDiff
//Description:      Returs difference between even and odd digits
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             31/10/25
//
//////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit=0;
    int iEven=0,iOdd=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iNo%2==0)
        {
            iEven+=iDigit;
        }
        else
        {
            iOdd+=iDigit;
        }
        iNo=iNo/10;
    }
    return iEven-iOdd;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

    printf("Difference is:%d",iRet);

    return 0;

}