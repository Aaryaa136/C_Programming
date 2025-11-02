#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    CheckLeapYear
//Description:      Check if year is leap year or not
//Input:            Integer
//Author:           Aaryaa Patil
//Date:             27/10/25
//
//////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if(((year%4)==0 && (year%100)!=0) || (year%400)==0)
    {
        printf("Is leap year");
    }
    else
    {
        printf("Not a leap year");
    }
}

int main()
{
    int yr;

    printf("Enter year:");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0; 
}