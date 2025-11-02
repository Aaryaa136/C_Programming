#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    SumNonFact
//Description:      Display summation of non factors
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             25/10/25
//
//////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    if(iNo<=0)
    {
        return -1;
    }

    int iCnt=0;
    int iSum=0;

    for(iCnt=1; iCnt<=iNo ; iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d\t",iCnt);
            iSum+=iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("\nSumation of non factors is:%d",iRet);

    return 0;
}