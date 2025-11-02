#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    CountRange
//Description:      Count digit if number has 3 or 7
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             31/10/25
//
//////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit=0;
    int iCount=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit==3 || iDigit==7)
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

    iRet=CountRange(iValue);

    printf("%d",iRet);

    return 0;

}