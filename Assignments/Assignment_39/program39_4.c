#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display pattern using recursive program  : A B C D E F
//Output:           Character
//Author:           Aaryaa Patil
//Date:             7/12/25
//
//////////////////////////////////////////////////////////

void Display()
{
    static char ch='A';

    if(ch <= 'F')
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