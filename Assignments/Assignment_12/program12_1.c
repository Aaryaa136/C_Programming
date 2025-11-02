#include<stdio.h>

//Time complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    print_factors
//Description:      Print factors of number
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

void print_factors(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    print_factors(number);

    return 0;
}