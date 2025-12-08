#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display pattern using recursive program  : * * * * *
//Author:           Aaryaa Patil
//Date:             7/12/25
//
//////////////////////////////////////////////////////////

void Display()
{
    static int iCnt=1;

    if(iCnt <= 5)
    {
        printf("*\t");
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}