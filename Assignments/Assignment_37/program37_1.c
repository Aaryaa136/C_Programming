#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////
//
//Function Name:    ChkChar
//Description:      Check whether character entered is present in string or not
//Input:            String
//Output:           Boolean
//Author:           Aaryaa Patil
//Date:             4/12/25
//
//////////////////////////////////////////////////////////

bool ChkChar(char *str , char ch)
{
    while(*str !='\0')
    {
        if(*str == ch)
        {
            return 1;
        }
        str++;
    }
    return 0;
}

int main()
{
    char arr[20];
    char cValue='\0';
    bool bRet =0;

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    bRet=ChkChar(arr,cValue);

    if(bRet == 1)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}