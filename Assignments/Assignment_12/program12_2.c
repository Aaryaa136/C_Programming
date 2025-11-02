#include<stdio.h>

//Time complexity:O(N/2)

//////////////////////////////////////////////////////////
//
//Function Name:    count_factors
//Description:      Count total number of factors of a number
//Input:            Integer
//Output            Integer
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

int count_factors(int iNo)
{
    int iCnt=0;
    int iFrequency=0;

    if(iNo<=0)
    {
        return -1;
    }

    for(iCnt=1; iCnt<=(iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;    
        }
    }
}

int main()
{
    int number,iRet=0;

    printf("Enter number:");
    scanf("%d",&number);

    iRet=count_factors(number);

    printf("Total factors are:%d",iRet);

    return 0;
}