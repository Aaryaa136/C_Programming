#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display ASCII value of decimal, hexadecimal and octal
//Input:            Character
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

void Display(char ch)
{
    printf("Character: %c\n", ch);
    printf("Decimal    : %d\n", ch);
    printf("Hexadecimal: %X\n", ch);
    printf("Octal      : %o\n", ch);
}

int main()
{
    char cValue='\0';

    printf("Enter character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}