#include<stdio.h>

//Time complexity:O(N/2)

//////////////////////////////////////////////////////////
//
//Function Name:    sum_count_factors
//Description:      Returns sum of total number of factors of a number
//Input:            Integer
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

int sum_count_factors(int iNo)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=1; iCnt<=(iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
            iSum+=iCnt;    
        }
    }

    return iSum;
}

int main()
{
    int number,iRet=0;

    printf("Enter number:");
    scanf("%d",&number);

    iRet=sum_count_factors(number);

    printf("Sum of factors are:%d",iRet);

    return 0;
}