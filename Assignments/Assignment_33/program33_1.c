#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////
//
//Function Name:    ChkAlpha
//Description:      Check whether entered value is character or not
//Input:            Character
//Output:           Boolean
//Author:           Aaryaa Patil
//Date:             28/11/25
//
//////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}