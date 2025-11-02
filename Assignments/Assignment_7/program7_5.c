#include<stdio.h>

//Time complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    MultipleDisplay
//Description:      Display first 5 multiples of N
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             27/10/25
//
//////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int i=1;

    while(i<=5)
    {
        printf("%d\n",iNo*i);
        i++;
    }

}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}