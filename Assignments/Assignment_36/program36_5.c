#include <stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    strlwrx
//Description:      Count white spaces
//Input:            String
//Output:           Integer
//Author:           Aaryaa Patil
//Date:             3/12/25
//
//////////////////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount=0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount++;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    iRet=CountWhite(arr);

    printf("White spaces count:%d",iRet);

    return 0;
}
