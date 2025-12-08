#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display pattern using recursive program  : a b c d e f
//Output:           Character
//Author:           Aaryaa Patil
//Date:             7/12/25
//
//////////////////////////////////////////////////////////

void Display()
{
    static char ch='a';

    if(ch <= 'f')
    {
        printf("%c\t",ch);
        ch++;
        Display();
    }
}

int main()  
{
    Display();

    return 0;
}