#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////
//
//Function Name:    ChkSpecial
//Description:      Check whether character is special symbol or not
//Input:            Character
//Output:           Boolean
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

bool ChkSpecial(char ch)
{
    if(ch == '!' || ch == '#' || ch == '@' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return true;
    }
    else return false;
}

int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter character:");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}