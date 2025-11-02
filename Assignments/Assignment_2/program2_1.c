#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Take input from user and display using while loop
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             21/10/25
//
//////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt=0;

    iCnt=1;

    while(iCnt<=iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}