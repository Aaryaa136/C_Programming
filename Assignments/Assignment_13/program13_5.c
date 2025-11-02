#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    sum_even_numbers
//Description:      Print sum of N even natural numbers
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             30/10/25
//
//////////////////////////////////////////////////////////

int sum_even_numbers(int limit)
{
    int iSum=0;

    if(limit<=0)
    {
        return -1;
    }

    int iCnt=0;

    for(iCnt=1;iCnt<=limit;iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("%d\n",iCnt);
            iSum+=iCnt;
        }
    }

    return iSum;
}

int main()
{
    int limit=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&limit);

    iRet=sum_even_numbers(limit);

    printf("Sum of n even numbers is:%d",iRet);

    return 0;
}