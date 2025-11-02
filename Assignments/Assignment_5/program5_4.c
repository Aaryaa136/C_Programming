#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    CheckNumberType
//Description:      Check if number is positive ,negative or zero
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             27/10/25
//
//////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if(num>0)
    {
        printf("Entered number is spositive");
    }
    else if(num<0) 
    {
        printf("Entered number is negative");
    }
    else
    {
        printf("Entered number is neither postive nor negative , zero");
    }

}

int main()
{
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}