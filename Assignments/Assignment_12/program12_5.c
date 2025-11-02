#include<stdio.h>
#include<stdbool.h>

//Time complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    is_divisible_by_five
//Description:      Check if numebr is divisible by 5 or not 
//Input:            Integer
//Output:           Boolean
//Author:           Aaryaa Patil
//Date:             29/10/25
//
//////////////////////////////////////////////////////////

bool is_divisible_by_five(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo ; iCnt++)
    {
        if((iNo % 5) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int number;
    bool bRet=false;

    printf("Enter number:");
    scanf("%d",&number);

    bRet=is_divisible_by_five(number);

    if(bRet==true)
    {
        printf("Number is divisble by 5");
    }
    else
    {
        printf("Number is not divisble by 5");
    }

    return 0;
}