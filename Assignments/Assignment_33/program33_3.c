#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////
//
//Function Name:    ChkDigit
//Description:      Check whether entered value is digit or not
//Input:            Character
//Output:           Boolean
//Author:           Aaryaa Patil
//Date:             28/11/25
//
//////////////////////////////////////////////////////////

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet=ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not a digit");
    }

    return 0;
} 