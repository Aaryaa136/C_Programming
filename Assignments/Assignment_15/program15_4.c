#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    MultiDigits
//Description:      Returs multiplication of digits
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             31/10/25
//
//////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit=0;
    int iCount=1;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;

        if(iDigit!=0)
        {
             iCount*=iDigit;
        }   
    }
    return iCount;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);

    printf("Multiplication of digit:%d",iRet);

    return 0;

}