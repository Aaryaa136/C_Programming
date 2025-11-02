#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    MultiFact
//Description:      Display multiplication of factors
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             25/10/25
//
//////////////////////////////////////////////////////////

int MultiFact(int iNo)
{
    if(iNo<=0)
    {
        return -1;
    }

    int iCnt=0;
    int iMultiplication=1;

    for(iCnt=1; iCnt<=iNo/2 ; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
            iMultiplication *= iCnt;
        }
    }

    return iMultiplication;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=MultiFact(iValue);

    printf("\nMultiplication of factors is:%d",iRet);

    return 0;
}