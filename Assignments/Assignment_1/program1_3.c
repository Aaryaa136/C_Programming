#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display number from 5 to 1
//Author:           Aaryaa Patil
//Date:             20/10/25
//
//////////////////////////////////////////////////////////

void Display()
{
    int i=0;
    i=5;

    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}