#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Takeinput from user and cehck which condition satifies
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             21/10/25
//
//////////////////////////////////////////////////////////


void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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