#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      If character is lower convert to upper and vice versa, ramiming as it is
//Input:            Character
//Output:           Character/Integer/Symbol
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c\n",ch=ch-32);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c\n",ch=ch+32);
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue='\0';

    printf("Enter character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}