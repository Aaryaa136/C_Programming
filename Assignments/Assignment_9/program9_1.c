#include<stdio.h>

//Time complexity:O(N)

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display two differet pattern 
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             28/10/25
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t");
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