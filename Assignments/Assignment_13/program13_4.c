#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    sum_natural_numbers
//Description:      Print sum of N natural numbers
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             30/10/25
//
//////////////////////////////////////////////////////////

int sum_natural_numbers(int limit)
{
    int iSum=0;

    if(limit<=0)
    {
        return -1;
    }

    int iCnt=0;

    for(iCnt=1;iCnt<=limit;iCnt++)
    {
        printf("%d\n",iCnt);
        iSum+=iCnt;
    }

    return iSum;
}

int main()
{
    int limit=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&limit);

    iRet=sum_natural_numbers(limit);

    printf("Sum of n natural numbers is:%d",iRet);

    return 0;
}