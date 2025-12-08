#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display pattern using recursive program  : 5 4 3 2 1
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             7/12/25
//
//////////////////////////////////////////////////////////

void Display()
{
    static int iCnt=5;

    if(iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}