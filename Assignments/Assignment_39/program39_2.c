#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display pattern using recursive program  : 1 2 3 4 5
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             7/12/25
//
//////////////////////////////////////////////////////////

void Display()
{
    static int iCnt=1;

    if(iCnt <= 5)
    {
        printf("%d\t",iCnt);
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}