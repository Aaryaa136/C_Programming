#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    CheckEvenOdd
//Description:      Check if number is even or odd
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             27/10/25
//
//////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if((num%2)==0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}

int main()
{
    int number;

    printf("Enter number:");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0; 
}