#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////
//
//Function Name:    ChkSmall
//Description:      Check whether entered value is lowr or not
//Input:            Character
//Output:           Boolean
//Author:           Aaryaa Patil
//Date:             28/11/25
//
//////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet=ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a small case character");
    }

    return 0;
} 