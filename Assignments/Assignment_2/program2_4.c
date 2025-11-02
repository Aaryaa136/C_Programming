#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Take 2 values as input and display a number that many times
//Input:            Integer,Integer
//Author:           Aaryaa Patil
//Date:             21/10/25
//
//////////////////////////////////////////////////////////

void Display(int iNo,int iFrequency)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    printf("Enter frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}

/*

Input:  11  3
Output: 11  11  11

Input:  4   2
Output: 4   4

Input:  13  0
Ouput:  
*/