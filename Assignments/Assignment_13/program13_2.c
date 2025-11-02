#include<stdio.h>

//Time Complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    print_even_numbers
//Description:      Print even numbers from 1 to N
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             30/10/25
//
//////////////////////////////////////////////////////////

void print_even_numbers(int limit)
{
    if(limit<=0)
    {
        return;
    }

    int iCnt=0;

    for(iCnt=1;iCnt<=limit;iCnt++)
    {
        if((iCnt%2)==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int limit=0;

    printf("Enter number:");
    scanf("%d",&limit);

    print_even_numbers(limit);

    return 0;
}