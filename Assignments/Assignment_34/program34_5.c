#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display decimal value into octal and hexdecimal format
//Input:            Character
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Hexadecimal:0x%x\n", ch);
    printf("Octal: %04o\n", ch);       // %o in printf prints an integer in octal.
}

int main()
{
    char cValue='\0';

    printf("Enter character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}