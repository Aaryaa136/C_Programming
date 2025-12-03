#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////
//
//Function Name:    ChkCapital
//Description:      Check whether character is capital or not
//Input:            Character
//Output:           Boolean
//Author:           Aaryaa Patil
//Date:             28/11/25
//
//////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet=ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital letter");
    }
    else
    {
        printf("It is not a capital character");
    }

    return 0;
}